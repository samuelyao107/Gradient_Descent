#include <iostream>

//The objective of this program is to find the minimum of the function f(x) = x²-2x +1
//using the gradient descent algorithm

double funcToMini(double a){
    return a*a - 2*a +1;
}

int main(int argc, char * argv[]){
    int k = 20; // the number of iterations
    double x0 = 50; // the starting point
    double alpha = 0.7; //the hyperparameter aka learning rate

    std::cout<<"This program computes the minimum of f(x)=x²-2x+1 using gradient desent algorithm \n";
    std::cout<<"Enter the starting point\n";
    std::cin>>x0;
    std::cout<<"Enter the learning rate\n";
    std::cin>>alpha;
    std::cout<<"Enter the number of iterations\n";
    std::cin>>k;

    for(int i=0; i<k; i++){
       x0 = x0 - alpha * (2*x0 - 2); // the derivative of f(x) is 2x - 2
    }

    std::cout<<"The minimum of f(x)=x²-2x+1 is f("<<x0<<")\n";
   

    return 0;
}