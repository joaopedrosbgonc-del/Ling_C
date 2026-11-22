#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void limparBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void lerLinha(char *s, int tam) {
    if (fgets(s, tam, stdin) != NULL) {
        s[strcspn(s, "\n")] = '\0';
    }
}

/* ================= 1. ALUNOS ================= */
typedef struct {
    int matricula;
    char nome[60];
    float nota1, nota2, media;
} Aluno;

float mediaAluno(float n1, float n2) {
    return (n1 + n2) / 2.0f;
}

void sistemaAlunos(void) {
    system("cls");
    Aluno a[10];
    int i, maior = 0, menor = 0, acima = 0, qnt = 0;
    float soma = 0, mediaGeral;
    char r;

    for (i = 0; i < 10; i++) {
        do{
        printf("\nAluno %d/10 - Matricula: ", i + 1);
        scanf("%d", &a[i].matricula);
        limparBuffer();
        printf("Nome: ");
        lerLinha(a[i].nome, 60);
        printf("Notas 1 e 2: ");
        scanf("%f %f", &a[i].nota1, &a[i].nota2);
        limparBuffer();

        a[i].media = mediaAluno(a[i].nota1, a[i].nota2);
        soma += a[i].media;
        if (a[i].media > a[maior].media) maior = i;
        if (a[i].media < a[menor].media) menor = i;
        printf("deseja encerrar o cadastro?\n--> ");
        scanf(" %c", &r);
        qnt++;
        }while (r != 's');
        {
            break;
        }
    }

    mediaGeral = soma / qnt;
    printf("\n--- Situacao ---\n");
    for (i = 0; i < qnt; i++) {
        printf("%d - %s | Media: %.2f | %s\n",
               a[i].matricula, a[i].nome, a[i].media,
               a[i].media >= 6.0f ? "Aprovado" : "Reprovado");
        if (a[i].media > mediaGeral) acima++;
    }

    printf("\nMaior media: %.2f (%s)\n", a[maior].media, a[maior].nome);
    printf("Menor media: %.2f (%s)\n", a[menor].media, a[menor].nome);
    printf("Media geral: %.2f | Acima da media: %d\n", mediaGeral, acima);
}

/* ================= 2. PAPELARIA ================= */
typedef struct {
    int codigo;
    char nome[60];
    float preco;
    int estoque;
} ProdPap;

int acharPap(ProdPap p[], int n, int cod) {
    int i;
    for (i = 0; i < n; i++) {
        if (p[i].codigo == cod) return i;
    }
    return -1;
}

void reporPap(ProdPap *p, int qtd) {
    (*p).estoque += qtd;
}

int venderPap(ProdPap *p, int qtd) {
    if (qtd <= 0 || qtd > (*p).estoque) return 0;
    (*p).estoque -= qtd;
    return 1;
}

void sistemaPapelaria(void) {
    system("cls");
    ProdPap p[15];
    int n = 0, op, cod, qtd, idx, i;

    do {
        printf("Papelaria!\n 1 - Cad\n 2 - Listar\n 3 - Repor\n 4 - Vender\n 5 - Buscar\n 0 - Sair\n: \n");
        scanf("%d", &op);
        limparBuffer();

        switch (op) {
            case 1:
                if (n >= 15) { printf("Cheio!\n"); break; }
                printf("Codigo: ");
                scanf("%d", &cod);
                limparBuffer();
                if (acharPap(p, n, cod) != -1) { printf("Codigo repetido!\n"); break; }
                p[n].codigo = cod;
                printf("Nome: ");
                lerLinha(p[n].nome, 60);
                printf("Preco e estoque: ");
                scanf("%f %d", &p[n].preco, &p[n].estoque);
                limparBuffer();
                n++;
                break;

            case 2: {
                float total = 0, maiorVal = -1;
                int idxMaior = -1;
                for (i = 0; i < n; i++) {
                    float val = p[i].preco * p[i].estoque;
                    total += val;
                    if (val > maiorVal) { maiorVal = val; idxMaior = i; }
                    printf("Cod %d | %s | R$ %.2f | Est: %d | Total: R$ %.2f\n",
                           p[i].codigo, p[i].nome, p[i].preco, p[i].estoque, val);
                }
                printf("Total em estoque: R$ %.2f\n", total);
                if (idxMaior != -1) {
                    printf("Maior valor: %s (R$ %.2f)\n", p[idxMaior].nome, maiorVal);
                }
                break;
            }

            case 3:
                printf("Codigo e qtd repor: ");
                scanf("%d %d", &cod, &qtd);
                limparBuffer();
                idx = acharPap(p, n, cod);
                if (idx != -1 && qtd > 0) reporPap(&p[idx], qtd);
                else printf("Invalido!\n");
                break;

            case 4:
                printf("Codigo e qtd vender: ");
                scanf("%d %d", &cod, &qtd);
                limparBuffer();
                idx = acharPap(p, n, cod);
                if (idx == -1 || !venderPap(&p[idx], qtd)) printf("Venda negada!\n");
                else printf("Venda feita!\n");
                break;

            case 5:
                printf("Codigo: ");
                scanf("%d", &cod);
                limparBuffer();
                idx = acharPap(p, n, cod);
                if (idx != -1) {
                    printf("%s | R$ %.2f | Est: %d\n", p[idx].nome, p[idx].preco, p[idx].estoque);
                } else printf("Nao achou.\n");
                break;

            case 0: break;
            default: printf("Opcao invalida.\n");
        }
    } while (op != 0);
}

/* ================= 3. FUNCIONARIOS ================= */
typedef struct {
    int codigo;
    char nome[60];
    char cargo[40];
    float base, extras;
} Func;

void sistemaFuncionarios(void) {
    system("cls");
    Func f[8];
    int n, i, top = 0;
    float folha = 0, maiorLiq = -1;

    printf("\nQuantos funcionarios (1 a 8)? ");
    scanf("%d", &n);
    limparBuffer();
    if (n < 1 || n > 8) { printf("Invalido!\n"); return; }

    for (i = 0; i < n; i++) {
        printf("\nFunc %d - Codigo: ", i + 1);
        scanf("%d", &f[i].codigo);
        limparBuffer();
        printf("Nome: ");
        lerLinha(f[i].nome, 60);
        printf("Cargo: ");
        lerLinha(f[i].cargo, 40);
        printf("Salario-base e horas extras: ");
        scanf("%f %f", &f[i].base, &f[i].extras);
        limparBuffer();
    }

    printf("\n--- Folha ---\n");
    for (i = 0; i < n; i++) {
        float bruto = f[i].base + f[i].extras * ((f[i].base / 160.0f) * 1.5f);
        float liq = bruto * 0.90f;
        folha += liq;
        if (liq > maiorLiq) { maiorLiq = liq; top = i; }
        printf("%s | Bruto: R$ %.2f | Liquido: R$ %.2f\n", f[i].nome, bruto, liq);
    }

    printf("Maior liquido: R$ %.2f (%s)\n", maiorLiq, f[top].nome);
    printf("Custo total da folha: R$ %.2f\n", folha);
}

/* ================= 4. LOJA ================= */
typedef struct {
    int codigo;
    char nome[60];
    float preco;
    int estoque;
} ProdLoja;

typedef struct {
    ProdLoja prod;
    int qtd;
    float total;
} VendaLoja;

int acharLoja(ProdLoja p[], int n, int cod) {
    int i;
    for (i = 0; i < n; i++) {
        if (p[i].codigo == cod) return i;
    }
    return -1;
}

void sistemaLoja(void) {
    system("cls");
    ProdLoja p[10];
    VendaLoja v[20];
    int np = 0, nv = 0, op, cod, qtd, idx, i, j;

    do {
        printf("\n--- Loja (1-Cad Prod 2-Venda 3-Prods 4-Relatorio 0-Sair): ");
        scanf("%d", &op);
        limparBuffer();

        switch (op) {
            case 1:
                if (np >= 10) { printf("Cheio!\n"); break; }
                printf("Codigo: ");
                scanf("%d", &cod);
                limparBuffer();
                if (acharLoja(p, np, cod) != -1) { printf("Repetido!\n"); break; }
                p[np].codigo = cod;
                printf("Nome: ");
                lerLinha(p[np].nome, 60);
                printf("Preco e estoque: ");
                scanf("%f %d", &p[np].preco, &p[np].estoque);
                limparBuffer();
                np++;
                break;

            case 2:
                if (nv >= 20) { printf("Limite de vendas!\n"); break; }
                printf("Codigo e qtd: ");
                scanf("%d %d", &cod, &qtd);
                limparBuffer();
                idx = acharLoja(p, np, cod);
                if (idx == -1 || qtd <= 0 || qtd > p[idx].estoque) {
                    printf("Venda invalida!\n");
                    break;
                }
                p[idx].estoque -= qtd;
                v[nv].prod = p[idx];
                v[nv].qtd = qtd;
                v[nv].total = p[idx].preco * qtd;
                nv++;
                break;

            case 3:
                for (i = 0; i < np; i++) {
                    printf("Cod %d | %s | R$ %.2f | Est: %d\n",
                           p[i].codigo, p[i].nome, p[i].preco, p[i].estoque);
                }
                break;

            case 4: {
                float fat = 0, topFat = -1;
                int topIdx = -1;
                for (i = 0; i < nv; i++) {
                    printf("Venda %d: %s x%d = R$ %.2f\n",
                           i + 1, v[i].prod.nome, v[i].qtd, v[i].total);
                    fat += v[i].total;
                }
                for (i = 0; i < np; i++) {
                    float somaP = 0;
                    for (j = 0; j < nv; j++) {
                        if (v[j].prod.codigo == p[i].codigo) somaP += v[j].total;
                    }
                    if (somaP > topFat) { topFat = somaP; topIdx = i; }
                }
                printf("Faturamento total: R$ %.2f\n", fat);
                if (topIdx != -1 && topFat > 0) {
                    printf("Mais faturou: %s (R$ %.2f)\n", p[topIdx].nome, topFat);
                }
                break;
            }

            case 0: break;
            default: printf("Opcao invalida.\n");
        }
    } while (op != 0);
}

/* ================= 5. CLINICA ================= */
typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    int codigo;
    char nome[60];
} Paciente;

typedef struct {
    Paciente pac;
    Data data;
    char desc[120];
} Consulta;

int acharPac(Paciente p[], int n, int cod) {
    int i;
    for (i = 0; i < n; i++) {
        if (p[i].codigo == cod) return i;
    }
    return -1;
}

void sistemaClinica(void) {
    system("cls");
    Paciente p[15];
    Consulta c[30];
    int np = 0, nc = 0, op, cod, idx, i, j;

    do {
        printf("\n--- Clinica (1-Cad Pac 2-Consulta 3-Por Pac 4-Por Data 5-Resumo 0-Sair): ");
        scanf("%d", &op);
        limparBuffer();

        switch (op) {
            case 1:
                if (np >= 15) { printf("Cheio!\n"); break; }
                printf("Codigo: ");
                scanf("%d", &cod);
                limparBuffer();
                if (acharPac(p, np, cod) != -1) { printf("Repetido!\n"); break; }
                p[np].codigo = cod;
                printf("Nome: ");
                lerLinha(p[np].nome, 60);
                np++;
                break;

            case 2:
                if (nc >= 30) { printf("Limite de consultas!\n"); break; }
                printf("Codigo paciente: ");
                scanf("%d", &cod);
                limparBuffer();
                idx = acharPac(p, np, cod);
                if (idx == -1) { printf("Nao encontrado!\n"); break; }
                c[nc].pac = p[idx];
                printf("Data (dd mm aaaa): ");
                scanf("%d %d %d", &c[nc].data.dia, &c[nc].data.mes, &c[nc].data.ano);
                limparBuffer();
                printf("Descricao: ");
                lerLinha(c[nc].desc, 120);
                nc++;
                break;

            case 3:
                printf("Codigo paciente: ");
                scanf("%d", &cod);
                limparBuffer();
                for (i = 0; i < nc; i++) {
                    if (c[i].pac.codigo == cod) {
                        printf("%02d/%02d/%04d | %s | %s\n",
                               c[i].data.dia, c[i].data.mes, c[i].data.ano,
                               c[i].pac.nome, c[i].desc);
                    }
                }
                break;

            case 4: {
                int d, m, a;
                printf("Data (dd mm aaaa): ");
                scanf("%d %d %d", &d, &m, &a);
                limparBuffer();
                for (i = 0; i < nc; i++) {
                    if (c[i].data.dia == d && c[i].data.mes == m && c[i].data.ano == a) {
                        printf("%s | %s\n", c[i].pac.nome, c[i].desc);
                    }
                }
                break;
            }

            case 5: {
                int topIdx = -1, maxC = 0;
                for (i = 0; i < np; i++) {
                    int cont = 0;
                    for (j = 0; j < nc; j++) {
                        if (c[j].pac.codigo == p[i].codigo) cont++;
                    }
                    printf("%s: %d consulta(s)\n", p[i].nome, cont);
                    if (cont > maxC) { maxC = cont; topIdx = i; }
                }
                if (topIdx != -1) {
                    printf("Mais atendido: %s (%d)\n", p[topIdx].nome, maxC);
                }
                break;
            }

            case 0: break;
            default: printf("Opcao invalida.\n");
        }
    } while (op != 0);
}

/* ================= MAIN ================= */
int main(void) {
    int op;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Alunos\n2. Papelaria\n3. Funcionarios\n4. Loja\n5. Clinica\n0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &op);
        limparBuffer();

        switch (op) {
            case 1: sistemaAlunos(); break;
            case 2: sistemaPapelaria(); break;
            case 3: sistemaFuncionarios(); break;
            case 4: sistemaLoja(); break;
            case 5: sistemaClinica(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (op != 0);

    return 0;
}