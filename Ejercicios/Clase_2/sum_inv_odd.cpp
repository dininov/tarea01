//este programa brinda el sumatorio de los inversos 
//multiplicativos de los numeros impares dados i y n fijos
#include <iostream>
#include <cmath>

int main(void)
{
    int i=0;
    int a=10;
    int b=100;
    int n=0;
    double result=0;

    for (i=a;i<=(n=b);i++){
        result=result+1.0/(2*i+1.0);
    }
    std::cout << "para i=" << (a) << " y n=" << (b) <<"\n";
    std::cout << "El resultado del sumatorio de  los \n";
    std::cout << "inversos de los numeros impares es: \n" << (result) << "\n";
    return 0;
}