#include <stdio.h>
#include <windows.h>

void Menu();
void Consultar_Saldo();
void Sacar();
void Depositar();

float saldo = 0;

int main(){
    int r = 0;

    do{
        Menu();
        scanf(" %d", &r);
        while(r < 1 || r > 4){
            system("cls");
            printf("\nErro! somente 1 a 4\n");
            Sleep(3000);
            Menu();
            scanf(" %d", &r);
        }

        switch (r){

        case 1:
            Consultar_Saldo();
            break;

        case 2:
            Depositar();
            break;
        case 3:
            Sacar();
        default:
            break;
        }
    } while (r != 4);
    
}

void Menu(){
    system("cls");
    printf("\n-------- CAIXA ELETRONICO --------\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Depositar\n");  
    printf("3 - Sacar\n");
    printf("4 - Sair\n--> ");         
         
}

void Consultar_Saldo(){
    system("cls");
    printf("Saldo atual: %.2f", saldo);
    Sleep(3000);
}

void Depositar(){
    float dep;
    system("cls");
    printf("Quanto quer depositar?\n--> ");
    scanf(" %f", &dep);
    saldo += dep;
    printf("R$ %.2f foram adicionados ao seu saldo total!", dep);
    Sleep(2000);
}

void Sacar(){
    float sac;

    system("cls");
    printf("Quanto quer sacar?\n--> ");
    scanf(" %f", &sac);

    saldo -= sac;
    printf("R$ %.2f foram retirados do seu saldo total!", sac);
    Sleep(2000);
}