
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

void ejercicio7() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int suma = 0;

    for (int i = 1; i <= N; i++) {
        suma += i;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio8() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int suma = 0;

    for (int i = 2; i <= N; i += 2) {
        suma += i;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio9() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int suma = 0;

    for (int i = 1; i <= N; i += 2) {
        suma += i;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio9() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int suma = 0;

    for (int i = 1; i <= N; i += 2) {
        suma += i;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio10() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int suma = 0;

    for (int i = 3; i <= N; i += 3) {
        suma += i;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio11() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int suma = 0;

    for (int i = 4; i <= N; i += 4) {
        suma += i;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio12() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int suma = 0;

    for (int i = 1; i <= N; i++) {
        suma -= i;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio13() {
    int N;
    cout << "Ingrese N (mayor o igual a -100): ";
    cin >> N;

    int suma = 0;

    for (int i = -100; i >= N; i++) {
        suma += i;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio14() {
    int N;
    cout << "Ingrese N (mayor o igual a -1000): ";
    cin >> N;

    int suma = 0;

    for (int i = -1000; i >= N; i += 10) {
        suma += i;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio15() {
    int N, suma = 0;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            suma -= i;
        else
            suma += i;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio16() {
    int N, suma = 0;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int valor = i * 2;

        if (i % 3 == 0)
            suma -= valor;
        else
            suma += valor;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio17() {
    int N, suma = 0;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0)
            suma -= i;
        else
            suma += i;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio18() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int a = 1, b = 1, suma = 0;

    for (int i = 1; i <= N; i++) {
        suma += a;

        int temp = a + b;
        a = b;
        b = temp;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio19() {
    int N, suma = 0;

    cout << "Ingrese N: ";
    cin >> N;

    int valor = -4;

    for (int i = 1; i <= N; i++) {

        if (i % 3 == 0)
            suma += -valor;
        else
            suma += valor;

        valor -= 4;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio20() {
    int N, suma = 0;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {

        if (i % 4 == 0)
            suma += i;
        else
            suma -= i;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio21() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int a = 2, b = 2, suma = 0;

    for (int i = 1; i <= N; i++) {
        suma += a;

        int temp = a + b;
        a = b;
        b = temp;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio22() {
    int N, suma = 0;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            suma -= 3;
        else
            suma += 3;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio23() {
    int N, suma = 0;

    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        suma += (i % 3 == 0) ? 3 : i % 3;
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio24() {
    int N, suma = 0;

    cout << "Ingrese N: ";
    cin >> N;

    int valores[4] = { 2,4,6,8 };

    for (int i = 0; i < N; i++) {
        suma += valores[i % 4];
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio25() {
    int N, suma = 0;

    cout << "Ingrese N: ";
    cin >> N;

    int valores[5] = { 5,4,3,2,1 };

    for (int i = 0; i < N; i++) {
        suma += valores[i % 5];
    }

    cout << "Resultado: " << suma << endl;
}

void ejercicio15_while() {

    int N, suma = 0, i = 1;

    cout << "Ingrese N: ";
    cin >> N;

    while (i <= N) {

        if (i % 2 == 0)
            suma -= i;
        else
            suma += i;

        i++;
    }

    cout << suma << endl;
}


void ejercicio16_while() {

    int N, suma = 0, i = 1;

    cout << "Ingrese N: ";
    cin >> N;

    while (i <= N) {

        int valor = i * 2;

        if (i % 3 == 0)
            suma -= valor;
        else
            suma += valor;

        i++;
    }

    cout << suma << endl;
}


void ejercicio17_while() {

    int N, suma = 0, i = 1;

    cout << "Ingrese N: ";
    cin >> N;

    while (i <= N) {

        if (i % 3 == 0)
            suma -= i;
        else
            suma += i;

        i++;
    }

    cout << suma << endl;
}


void ejercicio18_while() {

    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int a = 1, b = 1, suma = 0, i = 1;

    while (i <= N) {

        suma += a;

        int temp = a + b;
        a = b;
        b = temp;

        i++;
    }

    cout << suma << endl;
}


void ejercicio19_while() {

    int N, suma = 0, i = 1;
    int valor = -4;

    cout << "Ingrese N: ";
    cin >> N;

    while (i <= N) {

        if (i % 3 == 0)
            suma -= valor;
        else
            suma += valor;

        valor -= 4;
        i++;
    }

    cout << suma << endl;
}


void ejercicio20_while() {

    int N, suma = 0, i = 1;

    cout << "Ingrese N: ";
    cin >> N;

    while (i <= N) {

        if (i % 4 == 0)
            suma += i;
        else
            suma -= i;

        i++;
    }

    cout << suma << endl;
}


void ejercicio21_while() {

    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int a = 2, b = 2, suma = 0, i = 1;

    while (i <= N) {

        suma += a;

        int temp = a + b;
        a = b;
        b = temp;

        i++;
    }

    cout << suma << endl;
}


void ejercicio22_while() {

    int N, suma = 0, i = 1;

    cout << "Ingrese N: ";
    cin >> N;

    while (i <= N) {

        if (i % 2 == 0)
            suma -= 3;
        else
            suma += 3;

        i++;
    }

    cout << suma << endl;
}


void ejercicio23_while() {

    int N, suma = 0, i = 1;

    cout << "Ingrese N: ";
    cin >> N;

    while (i <= N) {

        int valor = (i % 3 == 0) ? 3 : i % 3;

        suma += valor;

        i++;
    }

    cout << suma << endl;
}


void ejercicio24_while() {

    int N, suma = 0, i = 0;
    int valores[4] = { 2,4,6,8 };

    cout << "Ingrese N: ";
    cin >> N;

    while (i < N) {

        suma += valores[i % 4];
        i++;
    }

    cout << suma << endl;
}


void ejercicio25_while() {

    int N, suma = 0, i = 0;
    int valores[5] = { 5,4,3,2,1 };

    cout << "Ingrese N: ";
    cin >> N;

    while (i < N) {

        suma += valores[i % 5];
        i++;
    }

    cout << suma << endl;
}

void ejercicio15_do() {

    int N, suma = 0, i = 1;

    cout << "Ingrese N: ";
    cin >> N;

    do {

        if (i % 2 == 0)
            suma -= i;
        else
            suma += i;

        i++;

    } while (i <= N);

    cout << suma << endl;
}


void ejercicio16_do() {

    int N, suma = 0, i = 1;

    cout << "Ingrese N: ";
    cin >> N;

    do {

        int valor = i * 2;

        if (i % 3 == 0)
            suma -= valor;
        else
            suma += valor;

        i++;

    } while (i <= N);

    cout << suma << endl;
}


void ejercicio17_do() {

    int N, suma = 0, i = 1;

    cout << "Ingrese N: ";
    cin >> N;

    do {

        if (i % 3 == 0)
            suma -= i;
        else
            suma += i;

        i++;

    } while (i <= N);

    cout << suma << endl;
}


void ejercicio18_do() {

    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int a = 1, b = 1, suma = 0, i = 1;

    do {

        suma += a;

        int temp = a + b;
        a = b;
        b = temp;

        i++;

    } while (i <= N);

    cout << suma << endl;
}


void ejercicio19_do() {

    int N, suma = 0, i = 1;
    int valor = -4;

    cout << "Ingrese N: ";
    cin >> N;

    do {

        if (i % 3 == 0)
            suma -= valor;
        else
            suma += valor;

        valor -= 4;
        i++;

    } while (i <= N);

    cout << suma << endl;
}


void ejercicio20_do() {

    int N, suma = 0, i = 1;

    cout << "Ingrese N: ";
    cin >> N;

    do {

        if (i % 4 == 0)
            suma += i;
        else
            suma -= i;

        i++;

    } while (i <= N);

    cout << suma << endl;
}


void ejercicio21_do() {

    int N;
    cout << "Ingrese N: ";
    cin >> N;

    int a = 2, b = 2, suma = 0, i = 1;

    do {

        suma += a;

        int temp = a + b;
        a = b;
        b = temp;

        i++;

    } while (i <= N);

    cout << suma << endl;
}


void ejercicio22_do() {

    int N, suma = 0, i = 1;

    cout << "Ingrese N: ";
    cin >> N;

    do {

        if (i % 2 == 0)
            suma -= 3;
        else
            suma += 3;

        i++;

    } while (i <= N);

    cout << suma << endl;
}


void ejercicio23_do() {

    int N, suma = 0, i = 1;

    cout << "Ingrese N: ";
    cin >> N;

    do {

        int valor = (i % 3 == 0) ? 3 : i % 3;

        suma += valor;

        i++;

    } while (i <= N);

    cout << suma << endl;
}


void ejercicio24_do() {

    int N, suma = 0, i = 0;
    int valores[4] = { 2,4,6,8 };

    cout << "Ingrese N: ";
    cin >> N;

    do {

        suma += valores[i % 4];
        i++;

    } while (i < N);

    cout << suma << endl;
}


void ejercicio25_do() {

    int N, suma = 0, i = 0;
    int valores[5] = { 5,4,3,2,1 };

    cout << "Ingrese N: ";
    cin >> N;

    do {

        suma += valores[i % 5];
        i++;

    } while (i < N);

    cout << suma << endl;
}
int main()
{
	ejercicio4();
	return 0;
}



