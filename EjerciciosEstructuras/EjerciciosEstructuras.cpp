
#include <iostream>

using namespace std;

void ejercicio3() {

    int numeros[6];
    int suma = 0;
    int promedio = 0;

    for (int i = 0; i < 6; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    promedio = suma / 6;

    cout << "El promedio de los numeros es: " << promedio << endl;

    for (int i = 0; i < 6; i++)
    {
        if (numeros[i] < promedio) {
            cout << "El numero " << numeros[i] << " es menor que el promedio" << endl;
        }
    }
}

void ejercicio4() {
    int numeros[4];
    int menor = numeros[0];

    for (int i = 0; i < 4; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }


    for (int i = 0; i < 4; i++)
    {
        if (numeros[i] > menor) {
            menor = numeros[0];           
        }
   
    }

    cout << "El numero menor es " << menor << endl;
}

void ejercicio5() {

    int numeros[2];
    int contador = 0;

    for (int i = 0; i < 2; i++)
    {
        cout << "Ingrese el numero: " << i + 1 << endl;
		cin >> numeros[i];
        if (numeros[i] < 10)
        {
            contador++;
        }   
    }

	if (contador == 2) {
        cout << "Ambos numeros son menores que 10" << endl;
    } else if (contador == 1) {
        cout << "Un numero es menor que 10" << endl;
    } else {
        cout << "Ningun numero es menor que 10" << endl;
    }
}

void ejercicio6() {
    
    int a, b, c;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "Ingrese el tercer numero: ";
    cin >> c;

    int promedio1 = (a + b) / 2;
    int promedio2 = (b + c) / 2;

    cout << "Promedio 1 (a y b): " << promedio1 << endl;
    cout << "Promedio 2 (b y c): " << promedio2 << endl;

    if (promedio1 > promedio2) {
        cout << "El primer promedio es mayor." << endl;
    }
    else if (promedio2 > promedio1) {
        cout << "El segundo promedio es mayor." << endl;
    }
    else {
        cout << "Ambos promedios son iguales." << endl;
    }
}

int main()
{
	ejercicio4();
	return 0;
}



