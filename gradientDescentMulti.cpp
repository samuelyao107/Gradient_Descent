#include <iostream>
#include <vector>


//The objective of this program is to find the minimum of the function f(x,y)=2x² + 3y²+ xy + 5
//using the gradient descent algorithm

int main(int argc, char * argv[]){
    int k = 0; // the number of iterations
    std::vector<double> myDoubleVector = {0,0}; // the starting point
    double alpha = 0; //the hyperparameter aka learning rate
    double grad_x =0;
    double grad_y =0;
    double value;

    std::cout<<"This program computes the minimum of f(x)=x²-2x+1 using gradient desent algorithm \n";
    std::cout<<"Enter the starting point x0\n";
    std::cin>>value;
    myDoubleVector[0] = value;
    std::cout<<"Enter the starting point y0\n";
    std::cin>>value;
    myDoubleVector[1] = value;
    std::cout<<"Enter the learning rate\n";
    std::cin>>alpha;
    std::cout<<"Enter the number of iterations\n";
    std::cin>>k;
    
     for(int i=0; i< k; i++){
        // ∂f(x,y)/∂x = 4x + y and ∂f(x,y)/∂y = x + 6y
        grad_x = 4* myDoubleVector[0] +  myDoubleVector[1];
        grad_y= myDoubleVector[0] + 6* myDoubleVector[1];
        
        myDoubleVector[0] = myDoubleVector[0] - alpha * grad_x;
        myDoubleVector[1] = myDoubleVector[1] - alpha * grad_y;


    }

    std::cout<<"The minimum of f(x,y)=2x² + 3y²+ xy + 5 is found in \n";
     for (auto it = myDoubleVector.begin(); it != myDoubleVector.end(); ++it) {
        std::cout << *it << " ";
    }

    



    return 0;
}