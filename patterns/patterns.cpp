#include <iostream>
using namespace std;

int main(){


    // int n =5;
    // for (int i =1 ; i <=n; i ++){
    //     for (int j = 1; j<=n ; j++){
    //       cout << j;
    //     }
    //    cout << endl;
    // }

    // output : 
                //  12345
                //  12345
                //  12345
                //  12345
                //  12345
    

    // int n = 3;
    // int num = 1;
    // for(int i =0; i<n; i++){
    //     for(int j =0; j< n ; j++){
    //         cout << num << " ";
    //         num = num + 1;
    //     }
    //     cout << endl;
    // }

    // output : 1 2 3 
    //          4 5 6
    //          7 8 9

    // int n = 3; 
    // char ch = 'A';
    // for (int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cout << ch << " ";
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    //  output :   A B C 
    //             D E F
    //             G H I


    // int n = 3;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // output : *
    //          **
    //          ***

   
   
   
    // int n =4;
    // int num =0;
    
    // for(int i = 0; i < n; i++){
    //         num++;
    //     for(int j = 0; j < i + 1; j++){
    //         cout << num  ;
            
    //     }
    //     cout << endl;
    // }

    // output: 1
    //         22
    //         333
    //         4444


    
    // int n=4;
    
    // for(int i =0 ; i< n ; i++){
    //     int num = 1;
    //     for(int j = 0; j < i+1; j++ ){
    //        cout << num;
    //        num++;
    //     }
    //     cout << endl;
    // }

    // output: 1
    //         12
    //         123
    //         1234            



    // int n=5;
    // for(int i = 0; i<n; i++){
    //     for(int j =i+1; j> 0; j--){
    //         cout << j;
            
    //     }
    //     cout << endl;
    // }

    // output : 1
    //          21
    //          321
    //          4321
    //          54321             
    

    

    // int n = 6;
    // int num = 0;
    // for(int i =0; i<n; i++){
    //     num ++;
    //     for(int j = n; j > i; j--){
    //        cout << num;
           
    //     }
    //     cout << endl;
    // }

    // output : 111111
    //          22222
    //          3333
    //          444
    //          55
    //          6              



    // int n =4; 
    // for(int i =0; i< n; i++){
    //     for(int j = (n-i-1) ; j > 0; j--){
    //         cout << " ";
           
    //     }
    //     for(int k = 0; k < i+1; k++){
    //         cout << k+1;
    //        }
    //        for(int l = i; l > 0; l--){
    //         cout << l;
            
    //        }
    //     cout << endl;
    // }

    // output :   1
    //           121
    //          12321
    //         1234321




// int n =4; 
  
//     // Top
// for(int i =0; i < n; i++){
//     for(int j =0; j< (n-i-1); j++){
//         cout << " ";
//     }
//     cout << "*";
//     if(i != 0){
//         for(int k = 0; k< (2*i -1); k++){
//             cout << " ";
//         }
//         cout << "*";
//     }
//     cout << endl;
// }
   
//    // Bottom
// for(int i = 0; i< n-1; i++){
//     for(int j = 0; j < i+1; j++){
//         cout << " ";

//     }
//     cout << "*";
//     if(i !=n-2){
//         for(int k =0; k < 2*(n-2-i)-1; k++){
//             cout << " ";
//         }
//         cout << "*";
//     }
//     cout << endl;

// }

// output:   *
//          * *
//         *   *
//        *     *
//         *   *
//          * *
//           *    




    return 0;
    }