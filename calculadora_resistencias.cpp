#include <iostream>
#include <string>
 #include <stdio.h>  
 #include <windows.h>  
using namespace std;

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  


    int banda1_;
    int banda2_;
    int banda3_;
    unsigned long long banda_multiplicador[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
    int banda_multiplicador_;
    double banda_tolerancia[] = {1, 2, 0.5, 0.25, 1, 0.05, 5, 10};
    int banda_tolerancia_;
    int banda6_ppm[]={100, 50, 15, 25, 10, 5};
    int banda6_ppm_;
    unsigned long long resultado;

void resistencia_4colores() {
    cout << "Seleccione la primera banda: " << endl;
    cout << "  0.Negro\n  1.Marron\n  2.Rojo\n  3.Naranja\n  4.Amarillo\n  5.Verde\n  6.Azul\n  7.Violeta\n  8.Gris\n  9.Blanco\n ";
    cin >> banda1_;

     cout << "\nSeleccione la segunda banda: " << endl;
     cout << "  0.Negro\n  1.Marron\n  2.Rojo\n  3.Naranja\n  4.Amarillo\n  5.Verde\n  6.Azul\n  7.Violeta\n  8.Gris\n  9.Blanco\n ";
     cin >> banda2_;

    cout << "\nSeleccione el multiplicador " << endl;
    cout << "  0.Negro\n  1.Marron\n  2.Rojo\n  3.Naranja\n  4.Amarillo\n  5.Verde\n  6.Azul\n  7.Violeta\n  8.Gris\n  9.Blanco\n ";
    cin >> banda_multiplicador_;

    cout << "\nSeleccione la tolerancia: " << endl;
    cout << "  0.Marron\n  1.Rojo\n  2.Verde\n  3.Azul\n  4.Violeta\n  5.Gris\n  6.Oro\n  7.Plata\n ";
    cin >> banda_tolerancia_;

    resultado = (banda1_ * 10 + banda2_) * banda_multiplicador[banda_multiplicador_];
        if (resultado>=1000)
        {
        cout << "Valor de la resistencia es de " << resultado/1000 << " Kohms " << banda_tolerancia[banda_tolerancia_] << "%" << endl;  
        }
    else{
        cout << "Valor de la resistencia es de " << resultado << " ohms " << banda_tolerancia[banda_tolerancia_] << "%" << endl;
        }
}

void resistencia_5colores() {
    cout << "Seleccione la primera banda: " << endl;
    cout << "  0.Negro\n  1.Marron\n  2.Rojo\n  3.Naranja\n  4.Amarillo\n  5.Verde\n  6.Azul\n  7.Violeta\n  8.Gris\n  9.Blanco\n ";
    cin >> banda1_;

    cout << "\nSeleccione la segunda banda: " << endl;
    cout << "  0.Negro\n  1.Marron\n  2.Rojo\n  3.Naranja\n  4.Amarillo\n  5.Verde\n  6.Azul\n  7.Violeta\n  8.Gris\n  9.Blanco\n ";
    cin >> banda2_;
    cout << "\nSeleccione la tercera banda: " << endl;
    cout << "  0.Negro\n  1.Marron\n  2.Rojo\n  3.Naranja\n  4.Amarillo\n  5.Verde\n  6.Azul\n  7.Violeta\n  8.Gris\n  9.Blanco\n ";
    cin >> banda3_;

    cout << "\nSeleccione el multiplicador: " << endl;
    cout << "  0.Negro\n  1.Marron\n  2.Rojo\n  3.Naranja\n  4.Amarillo\n  5.Verde\n  6.Azul\n  7.Violeta\n  8.Gris\n  9.Blanco\n ";
    cin >>banda_multiplicador_;
    
    cout << "\nSeleccione la tolerancia: " << endl;
    cout << "  0.Marron\n  1.Rojo\n  2.Verde\n  3.Azul\n  4.Violeta\n  5.Gris\n  6.Oro\n  7.Plata\n ";
    cin >> banda_tolerancia_;

    resultado = (banda1_ * 100 + banda2_ * 10 + banda3_) * banda_multiplicador[banda_multiplicador_];

    if (resultado>=1000)
      {
        cout << "Valor de la resistencia es de " << resultado/1000 << " kohms " << banda_tolerancia[banda_tolerancia_] << "%" << endl;  
    }
    else{
        cout << "Valor de la resistencia es de " << resultado << " ohms " << banda_tolerancia[banda_tolerancia_] << "%" << endl;
    }
}

void resistencia_6colores() {
    cout << "Seleccione la primera banda: " << endl;
    cout << "  0.Negro\n  1.Marron\n  2.Rojo\n  3.Naranja\n  4.Amarillo\n  5.Verde\n  6.Azul\n  7.Violeta\n  8.Gris\n  9.Blanco\n ";
    cin >> banda1_;

    cout << "\nSeleccione la segunda banda: " << endl;
    cout << "  0.Negro\n  1.Marron\n  2.Rojo\n  3.Naranja\n  4.Amarillo\n  5.Verde\n  6.Azul\n  7.Violeta\n  8.Gris\n  9.Blanco\n ";
    cin >> banda2_;
    cout << "\nSeleccione la tercera banda: " << endl;
    cout << "  0.Negro\n  1.Marron\n  2.Rojo\n  3.Naranja\n  4.Amarillo\n  5.Verde\n  6.Azul\n  7.Violeta\n  8.Gris\n  9.Blanco\n ";
    cin >> banda3_;

    cout << "\nSeleccione el multiplicador: " << endl;
    cout << "  0.Negro\n  1.Marron\n  2.Rojo\n  3.Naranja\n  4.Amarillo\n  5.Verde\n  6.Azul\n  7.Violeta\n  8.Gris\n  9.Blanco\n ";
    cin >> banda_multiplicador_;
    
    cout << "\nSeleccione la tolerancia: " << endl;
    cout << "  0.Marron\n  1.Rojo\n  2.Verde\n  3.Azul\n  4.Violeta\n  5.Gris\n  6.Oro\n  7.Plata\n ";
    cin >> banda_tolerancia_;
    
    cout << "\nSeleccione la sexta banda PPM: " << endl;
    cout << "  0.Marron\n  1.Rojo\n  2.Naranja\n  3.Amarillo\n  4.Azul\n  5.Violeta\n";
    cin>>banda6_ppm_;

    resultado = (banda1_ * 100 + banda2_ * 10 + banda3_) * banda_multiplicador[banda_multiplicador_];
    if (resultado>=1000)
      {
        cout << "Valor de la resistencia es de " << resultado/1000 << " kohms " << banda_tolerancia[banda_tolerancia_] << "%" <<" y "<< banda6_ppm[banda6_ppm_]<<"ppm"<<endl;  
    }
    else{
        cout << "Valor de la resistencia es de " << resultado << " ohms " << banda_tolerancia[banda_tolerancia_] << "%" <<" y "<< banda6_ppm[banda6_ppm_]<<"ppm"<<endl;
    } 
}

//De ohms a colores  
void ohms_colores(unsigned long long valor, string bandas[3]) {

    string colores[] = {"Negro", "Marron", "Rojo", "Naranja", "Amarillo", "Verde", "Azul", "Violeta", "Gris", "Blanco"};
    string valorStr = to_string(valor);

    int numerodegitos_resistencia = valorStr.length();
    int primerabanda = valorStr[0] - '0';
    int segundabanda = valorStr[1] - '0';
    int multiplicador = numerodegitos_resistencia - 2;

    bandas[0] = colores[primerabanda];
    bandas[1] = colores[segundabanda];
    bandas[2] = colores[multiplicador];
}

void ohms_coloresb5(unsigned long long valor, string bandas[4]) {
 
    string colores[] = {"Negro", "Marron", "Rojo", "Naranja", "Amarillo", "Verde", "Azul", "Violeta", "Gris", "Blanco"};


    string valorStr = to_string(valor);

    int numerodegitos_resistencia = valorStr.length();

    int primerabanda = valorStr[0] - '0';
    
    int segundabanda = valorStr[1] - '0';
    int tercerabanda = valorStr[2] - '0';

    int multiplicador = numerodegitos_resistencia - 3;

    bandas[0] = colores[primerabanda];
    bandas[1] = colores[segundabanda];
    bandas[2] = colores[tercerabanda];
    bandas[3] = colores[multiplicador];
}


void ohms_coloresb6(unsigned long long valor, string bandas[4]) {
 
    string colores[] = {"Negro", "Marron", "Rojo", "Naranja", "Amarillo", "Verde", "Azul", "Violeta", "Gris", "Blanco"};
    string valorStr = to_string(valor);
    int numerodegitos_resistencia = valorStr.length();

    int primerabanda = valorStr[0] - '0';
    int segundabanda = valorStr[1] - '0';
    int tercerabanda = valorStr[2] - '0';
    int multiplicador = numerodegitos_resistencia - 3;
    bandas[0] = colores[primerabanda];
    bandas[1] = colores[segundabanda];
    bandas[2] = colores[tercerabanda];
    bandas[3] = colores[multiplicador];
}

int main() {
    char opciones;
    char opcioens_colores;
    unsigned long long valor_ohms;
    string colores[3];
    string colores5[4];
    string colores6[4];
    string colores_tolerancia[] = {"Marron", "Rojo","Verde", "Azul", "Violeta", "Gris", "Oro", "Plata"};
    int banda_tolerancia_;
    string colores_ppm[]={"Marrón", "Rojo","Naranja", "Amarillo", "Azul", "Violeta"};
    int banda_ppm;

    cout<<"Calculadora de codigo de colores de resistencias\n"<<endl;
    cout<<"Ingrese una opcion \n 1. De colores a ohm \n 2. De ohm a colores"<<endl;
    cin>>opciones;
    
    switch (opciones){

    case '1':
        cout<<"Ingrese que tipo de banda que desee calcular: 4 Calores, 5 Colores o 6 Colores"<<endl;
        cin>>opcioens_colores;
    switch (opcioens_colores) {
    case '4':
        gotoxy(20,8);cout << "Calculadora de codigo de colores de resistencias de 4 bandas\n";
       resistencia_4colores();
    break;
    case '5':
        gotoxy(20,8);cout << "Calculadora de codigo de colores de resistencias de 5 bandas\n";
        resistencia_5colores();
    break;
    case '6':
    gotoxy(20,8);cout << "Calculadora de codigo de colores de resistencias de 6 bandas\n";
    resistencia_6colores();
    break;    
    
    default:
        break; 
    }
    
    break;

    case '2':
    cout<<"Ingrese que tipo de banda que desee calcular: 4 Calores, 5 Colores o 6 Colores"<<endl;
    cin>>opcioens_colores;
    switch (opcioens_colores)
    {
    case '4':
    gotoxy(20,8);cout << "Calculadora de codigo de colores de resistencias de 4 bandas\n";
    cout << "Ingresa el valor de la resistencia en ohmios: ";
    cin >> valor_ohms;
    cout << "Seleccione la tolerancia: "<<endl;
    cout << " 0)1%\n 1)2%\n 2)0.5%\n 3)0.25%\n 4)0.1%\n 5)0.05%\n 6)5%\n 7)10% "<<endl;
    cin>>banda_tolerancia_;
  
    ohms_colores(valor_ohms, colores);

    cout<<"Los colores de la resistencia de " << valor_ohms << " ohmios son:" << endl;
    cout<<"1ra Banda: " << colores[0] << endl;
    cout<<"2da Banda: " << colores[1] << endl;
    cout<<"3ra Banda: " << colores[2] << endl;
    cout<<"4ta Banda: "<<colores_tolerancia[banda_tolerancia_]<<endl;
        break;
    case '5':
     gotoxy(20,8);cout << "Calculadora de codigo de colores de resistencias de 5 bandas\n";
    cout << "Ingresa el valor de la resistencia en ohmios: ";
    cin >> valor_ohms;
    cout << "Seleccione la tolerancia: "<<endl;
    cout << " 0)1%\n 1)2%\n 2)0.5%\n 3)0.25%\n 4)0.1%\n 5)0.05%\n 6)5%\n 7)10% "<<endl;
    cin>>banda_tolerancia_;
  
    ohms_coloresb5(valor_ohms, colores5);

    cout<<"Los colores de la resistencia de " << valor_ohms << " ohmios son:" << endl;
    cout<<"1ra Banda: " << colores5[0] << endl;
    cout<<"2da Banda: " << colores5[1] << endl;
    cout<<"3ra Banda: " << colores5[2] << endl;
    cout<<"4ra Banda: " << colores5[3] << endl;
    cout<<"5ta Banda: "<<colores_tolerancia[banda_tolerancia_]<<endl;

        break;
    case '6':
     gotoxy(20,8);cout << "Calculadora de codigo de colores de resistencias de 6 bandas\n";
    cout << "Ingresa el valor de la resistencia en ohmios: ";
    cin >> valor_ohms;
    cout << "Seleccione la tolerancia: "<<endl;
    cout << " 0)1%\n 1)2%\n 2)0.5%\n 3)0.25%\n 4)0.1%\n 5)0.05%\n 6)5%\n 7)10% "<<endl;
    cin>>banda_tolerancia_;
    cout<<"Ingrese el PPM"<<endl;
    cout << " 0)100\n 1)50\n 2)15\n 3)25\n 4)0.1%\n 5)10\n 6)5"<<endl;
    cin>>banda_ppm;
  
    ohms_coloresb6(valor_ohms, colores6);

    cout<<"Los colores de la resistencia de " << valor_ohms << " ohmios son:" << endl;
    cout<<"1ra Banda: " << colores6[0] << endl;
    cout<<"2da Banda: " << colores6[1] << endl;
    cout<<"3ra Banda: " << colores6[2] << endl;
    cout<<"4ra Banda: " << colores6[3] << endl;
    cout<<"5ta Banda: "<<colores_tolerancia[banda_tolerancia_]<<endl;
    cout<<"6ta Banda: "<<colores_ppm[banda_ppm]<<endl;
        break;
    default:
        break;
    }
        break;
    default:
    break; }
    system("pause");
    return 0;
}


