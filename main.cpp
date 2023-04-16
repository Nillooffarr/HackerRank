#include <iostream>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
//#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int n){
    bool swapped;
    for (int i=0;i<n-1;i++){
        swapped = false;
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
    }
}
int absolute_value(int a, int b){
    int sub = a-b;
    if(sub<0){
        sub = b - a;
    }
    return sub;
}
void update(int *a,int *b) {
    
    int p = *a;
    *a = (*a) + (*b);// Complete this function   
    
    *b = absolute_value(p, *b) ;
}

int main(int, char**) {
    /* Data types
    char ch;
    int Int;
    long Lint;
    double Double;
    float Float;
    scanf("%d %ld %c %f %lf",&Int,&Lint,&ch,&Float, &Double);
    printf("%d \n %ld \n %c \n %.03f \n %.09lf \n",Int,Lint,ch,Float,Double);
    //cout << "Hellooo, world!\n";
    */

   /* if else, series
   int Num;
   cin>>Num;
   string Numbers[]={"one", "two", "three", "four", "five",
    "six", "seven","eight","nine"};
    if (Num>=1 && Num<=9){
        cout<<Numbers[Num-1]<<endl;
        } else{
        cout<<"Greater than 9"<<endl;
        }
        */

       /* for loop
       int a,b;
    scanf("%d \n%d",&a,&b);
    string Numbers[]={"one", "two", "three", "four", "five",
    "six", "seven","eight","nine"};
    for (int n=a;n<=b;n++){
        if(n>=1 && n<=9){
            cout<<Numbers[n-1]<<endl;
        }
        else{
            if(n%2==0){
                cout<<"even"<<endl;
            } else{
                cout<<"odd"<<endl;
            }
        }
    }
    */
   /*find Max
int a,b,c,d;
cin>>a>>b>>c>>d;
  int Max = 0 ;
    for(int i=0; i<4; i++){
        if(a>Max){
            swap(Max,a);
        }else if(b>Max){
            swap(Max,b);
        }else if(c>Max){
            swap(Max,c);
        }else if(d>Max){
            swap(Max,d);
        }
    }
    cout<<"Max: "<<Max<<endl;
*/
/*Bubblesort 
int Arr[]={3,2,8,1};
int N = sizeof(N)/sizeof(int);
BubbleSort(Arr,N);
for (int i=0;i<N;i++){
    cout<<" "<<Arr[i]<<endl;
}
*/
/* poinetrs 
int a,b;
int *pa = &a, *pb = &b;
scanf("%d %d",&a,&b);
update(pa,pb);
printf("%d %d\n",a,b);
*/



using namespace std;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 int q,n,k;
    cin>>q>>n;
    int** a = new int* [n];
   int** qarray = new int* [q];
   
    for (int i=0;i<n;i++){
        cin >> k;
        a[i] = new int [k];
        for (int j=0;j<k;j++){
            scanf("%d ",&a[i][j]);
        }  
    }
    for (int i=0;i<n;i++){
        qarray[i] = new int[2];
        scanf("%d %d", &qarray[i][0],&qarray[i][1]);
    }
    for (int i=0;i<q;i++){
       
        int ii = qarray[i][0];
        int jj = qarray[i][1];
        cout<<a[ii][jj]<<endl;
    }

    return 0;
}



