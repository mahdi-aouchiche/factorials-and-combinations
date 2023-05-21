#include "factorials_and_combinations.cpp"

int main() {
    int n, k, operation;
    char loop;

    do {
        menu();     // print menu for the user
        cout << "Which operation to perform: ";
        cin.clear();    // get rid of failure state
        cin >> operation;
        cout << endl;
    
        switch(operation){
            case 1:  /* factorial */
                cout << "Enter a number n: ";
	            cin >> n;
        
                if(n < 0){
                    cout << "Invalid input! "
                        << "n has to be gretaer or equal to zero." 
                        << endl;
                } else {
                    try
                    {
                        cout << n << "! = " << factorial(n) << endl;
                    }
                    catch(const std::exception& e)
                    {
                        std::cerr << e.what() << '\n';
                    }
                }
            break;

            case 2:  /* Combination */
                cout << "Enter a number n: ";
	            cin >> n;
                cout << "Enter a number k: ";
	            cin >> k;

                try
                {
                    cout << "C(" << n << ", " << k << ") = " << combination(n,k) << endl;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }  
            break;

            default:
                cout << "Wrong input! Select (1) or (2) from menu." << endl;
            break;
        } 
    
        cout << "Enter 'Y' to continue or 'N' to exit: " << endl;
        cin.clear();    // get rid of failure state
        cin >> loop;

    }while(loop == 'Y' || loop == 'y');

    return 0;
}
