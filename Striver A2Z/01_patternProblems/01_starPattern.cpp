/*
Pattern Problems

1.
        * * * * *
        * * * * *
        * * * * *
        * * * * *
        * * * * *



#include <iostream>
using namespace std;
int main(){
    int count = 5;
    for (int i = 0; i < count; i++) // rows : first line 0.. now loop goes  to inner loop and print 5 stars in column wise format
    {
        for (int j = 0; j < count; j++) 
        {
           cout << " * " ;
        }

        // after inner loop completes, a newline is printed. This moves output to the next row
        cout << endl; 
        // control now goes back to outer loop. i increments automatically (i++), next row starts execution
}

*/

/*

2.
            * 
            *  * 
            *  *  * 
            *  *  *  * 
            *  *  *  *  * 


#include <iostream>
using namespace std;
int main(){
    int count = 5;
    for (int i = 0; i < count; i++) //run the outer loop 5 times and that is the row
    {
       for (int j = 0; j < i+1 ; j++) //start from 0 & run the inner loop i+1 times means form the first row i=0, run inner loop to 0+1=1 time
                                    //for the 2nd loop run the inner row i+1 time this time i=1, then i+1 will bw 1+1=2.. and so on
       {
        cout << " * ";
       }
       cout << endl;
       
    }
    
}

*/


/*

3.
        1
        12
        123
        1234
        12345




#include <iostream>
using namespace std;
int main(){
    int count=5;
    for (int i = 1; i <=count; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}
*/

/*

4.
        1
        22
        333
        4444
        55555


#include <iostream>
using namespace std;
int main(){
    int count=5;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << i+1;
        }
        cout << endl;
        
    }
    
}

*/