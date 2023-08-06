#include <iostream>
#include <cstdlib>

// O numero de termos é passado junto com a execucação ./executar 6

int fibonacci(int numero)
{
    return (numero <= 1) ? 1 : fibonacci(numero -1) + fibonacci(numero -2);
}


int main(int argc, char *argv[])
{  
    
    if(argc > 1)
    {
        int numero = atoi(argv[1]);

        std::cout << "A sequÊncia Fibonacci de " << numero << " é: ";
        int i = 0;
        while(i < numero)
        {
            std::cout << " " << fibonacci(i);
            i++;
        }
        std::cout << '\n';
    }
    else
    {
        std::cout << "Informe um número." << '\n';
    }

    //funcao();

    return 0;
}