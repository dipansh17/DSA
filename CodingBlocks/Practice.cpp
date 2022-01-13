#include<bits/stdc++.h>
#include<math.h>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=1;row<=n;row++){
//         //space
//         for(int i=1;i<=(n-row);i++){
//             cout<<" ";
//         } 
//         //start with row number
//         int no=row;
//         //first half incrementing by 1 till i
//         for(int i=1;i<=row;i++){
//             cout<<no;
//             no++;
//         }
//              // second half decrement i-1
//              no-=2;
//              for(int i=1;i<row;i++){
//                  cout<<no;
//                  no--;
//              }
//         cout<<endl;
//     }
//     return 0;
// }   
// int main(){
//     int n;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         bool isPrime=1;
//         for(int j=2;j<i;j++){
//             if(i%j==0){
//                 isPrime=0;
//                 break;
//             }
//         }
//         if(isPrime){
//             cout<<i<<" ";
//         }
//     //     else{
//     //         cout<<i<<"is not prime"<<endl;
//     //     }
//     }
//     return 0;
// }
// replace zeros with 5 
// int reverseNumber(int temp){
//     int ans=0;
//     while(temp>0){
//         int rem=temp%10;
//         ans=ans*10+rem;
//         temp=temp/10;
//     }
//     return ans;

// }
// int main(){

//     int n,ans;
//     cin>>n;
// if(n==0){
//     n=5;
// }
// else{
//     int temp=0;
//     while(n>0){
//         int digit=n%10;
//     if(digit==0){
//         digit=5;
//     }
//     temp=temp*10+digit;
//     n=n/10;
// return reverseNumber(temp);
//     }
    
// }
// cout<<ans;
// return 0;
// }
// another approch
// int calculateAddedValue(int n){
//     int ans=0;
//     int decimalPlace=1;
//     if(n==0){
//         result += (5*decimalPlace);
//     }
//     while(n>0){
//         if(n%10 == 0){
//             result +=(5*decimalPlace);
//         }
//         n/=10;
//         decimalPlace*=10;
//     }
//     return ans;
// }
// int replace0to5(int n){
//     return n+=calculateAddedValue(n);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<< replace0to5(n);
//     return 0;
// }
// int main() {
// 	int f,c;
// 	for(int i=0;i<3;i++){
//             cin>>f;
//     }
// 	for(int i=0;i<3;i++){
//     cout<<f<<" "<<c<<endl;
//     }
// 	return 0;
// }
// int main() {
// 	int n=5;
    
// for(int i=0;i<5;i++){
    
//     for(int j=1;j<=n;j++){
//         cout<<j<<" ";
//     }

//     for(int k=0;k<=(n+2);k++){
//         cout<<"*";
      
//     }

   
//     cout<<endl;
//     n--;
// }
// 	return 0;
// }
// int main() {
// 	int a=1,b=-1,c=28,discriminant;
// 	// cin>>a>>b>>c;
// 	discriminant=b*b-4*a*c;
// 	if(discriminant>0){
// 		int x0=(-b+ sqrt(discriminant))/(2*a);
// 		int x1=(-b- sqrt(discriminant))/(2*a);
// 		cout<<"Real and Distinct"<<endl;
// 		if(x0>x1){
// 			cout<<x1<<" "<<x0<<endl;
// 		}
// 		else{
// 			cout<<x0<<" "<<x1<<endl;
// 		}
// 	}
// 	else if(discriminant==0){
// 		cout<<"Real and Equal"<<endl;
// 		int x1=-b/(2*a);
// 		cout<<x1<<" "<<x1<<endl;
// 	}
// 	else{
// 		cout<<"Imaginary"<<endl;
// 	}

// 	return 0;
// }
//f to c
// int main(){
// 	int start,end,step=0;
// 	cin>>start>>end>>step;
// 	while(start<=end){
// 		cout<<start<<" ";
// 		start+=step;
// 	}
// 	return 0;
// }
// int main() {
// 	int maxf,minf,step;
// 	cin>>minf>>maxf>>step;
// 	while(minf<=maxf){
// 		int convert=(5*(minf-32)/9);
// 		cout<<minf<<" "<<convert<<endl;
// 		minf+=step;
// 	}
// 	return 0;
// }
//print series
// int main() {
// 	int n1,n2;
// 	cin>>n1>>n2;
// 	// int i=1;
// 	// while(i<=n1){
// 	// 	int no=3*i+2;
// 	// 	if(no%n2!=0){
// 	// 		cout<<no<<endl;
// 	// 	}
// 	// 	i++;
// 	// }
// 	for(int i=0;i<=n1;i++){
// 		int n=3*i+2;
// 		if(n%n2!=0){
// 			cout<<n<<endl;
// 		}
// 	}
// 	return 0;
// }
// int main() {
// 	int n=4;
// 	// cin>>n;
// 	int a=1;
// 	for(int row=1;row<=n;row++){
// 		for(int j=1;j<=row;j++){
// 			cout<<a<<"	";
// 			a++;
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }
// int main() {
// 	int n=10,third;
// 	// cin>>n;
// 	if(n==1){
// 		cout<<"0"<<endl;
// 	}
// 	else if(n==2){
// 		cout<<"1"<<endl;
// 	}
// 	else{
// 		int first=0;
// 		int second=1;
// 		for(int i=2;i<=n;i++){
// 			 third=first+second;
// 			first=second;
// 			second=third;
// 		}
// 		cout<<third<<endl;
// 	}
// 	return 0;
// }
// int main() {
// 	int n=4;
// //	cin>>n;
// 	for(int row=1;row<=n;row++){
// 		for(int j=n;j>row;j++){
// 			cout<<j;
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }
// int main() {
// 	int n=3;
// // cin>>n;
// for(int i=1;i<=(2*n-1);i++){
// 	//for space 
// 	for(int j=n-i;j>0;j--){
// 		cout<<" ";
// 	}
	
// 	// for printing stars
// 	for(int j=0;j<=i;j+2){
// 		cout<<"*";
// 	}
// 	cout<<endl;	
// }
// 	return 0;
// }
// int main() {
// 	int a=-1;
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<=n;i++){
		
// 		for(int j=1;j<=i;j++){
// 			cout<<i<<"	";
// 		}
// 		for(int a=-1;a<=2*n-3;a++){
// 			cout<<"0";
// 		}
// 		cout<<endl;

// 	}
// 	return 0;
// }
// int main(){
// 	char ch;
// 	cin>>ch;
// 	if(ch>='a' && ch<='z'){
// 		cout<<"lowercase"<<endl;
// 	}
// 	else if(ch>='A' && ch<='Z'){
// 		cout<<"UPPERCASE"<<endl;
// 	}
// 	else if(ch>='0' && ch<='9'){
// 		cout<<"Numeric"<<endl;
// 	}
// 	else{
// 		cout<<"Check ASCII table"<<endl;
// 	}
// 	return 0;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int i=0;
// 	int sum=0;
// 	while(i<=n){
// 		sum+=i;
// 		i=i+2;
// 	}
// 	cout<<sum<<endl;
// 	return 0;
// }
// int main(){
// 	int f;
// 	while(1){
// 		cin>>f;
// 		float c=(5*(f-32)/9);
// 		cout<<f<<"	"<<c<<endl;
// 	}
// 	cout<<endl;
// }
/*
5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5
*/
// int main() {
// 	int n=3;
// 	int a=1;
// 	for(int row=1;row<=n;row++){
// 		//for spacing
// 		for(int j=n-row;j>0;j--){
// 			cout<<" ";
// 		}
// 		for(int i=row;i<n;i++){
// 			cout<<a;
// 			a++;
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

////octal to binary
// int main() {
//   int decimal = 0, octal, remainder, product = 0;
//   long binary = 0;
  
//   cin >> octal;
  
//   while(octal != 0) {
//     decimal += (octal%10) * pow(8,product);
//     ++product; 
//     octal /= 10;
//     }
    
//     product = 1;
//     while (decimal != 0) {
//       binary += (decimal % 2) * product;
//       decimal /= 2;
//       product *= 10;
//       }
      
//       cout<< binary;
//   return 0;
// }
//is number amstrong
// int main() {
//     int num, originalNum, remainder, result = 0;
//     cout << "Enter a three-digit integer: ";
//     cin >> num;
//     originalNum = num;

//     while (originalNum != 0) {
//         // remainder contains the last digit
//         remainder = originalNum % 10;
        
//         result += remainder * remainder * remainder;
        
//         // removing last digit from the orignal number
//         originalNum /= 10;
//     }

//     if (result == num)
//         cout << num << " is an Armstrong number.";
//     else
//         cout << num << " is not an Armstrong number.";

//     return 0;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	for( int row=1;row<=n;row++){
// 		for(int j=1;j<=row;j++){
// 			cout<<row+j-1<<" ";
			
// 		}
// 		cout<<endl;
// 	}
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	for(int row=1;row<=n;row++){
// 		for(int j=1;j<=row;j++){
// 			cout<<row-j+1<<" ";
	
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	for(int  row=1;row<=n;row++){
// 		for(int j=1;j<=n;j++){
// 			char ch='A'+row-1;

// 			cout<<ch<<" ";
	
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	for(int  row=1;row<=n;row++){
// 		for(int j=1;j<=n;j++){
// 			char ch='A'+j-1;

// 			cout<<ch<<" ";
	
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	for(int row=1;row<=n;row++){
// 				char ch='A'+n-row;
// 		for(int j=1;j<=row;j++){
	
// 			cout<<ch<<" ";
// 			ch++;
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	for(int row=1;row<=n;row++){
// 		for(int j=1;j<=(n-row);j++){
// 			cout<<" ";
// 		}
// 		for(int j=1;j<=row;j++){
// 			cout<<"*"<<" ";
// 		}
// 		cout<<endl;

// 	}
// 	return 0;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int row=1;
// 	while(row<=n){
// 		//for space (1st traingle)
// 		int space=n-row;

// 		while(space){
// 			cout<<" ";
// 			space--;
// 		}

// 		//for number(2nd triangle)
		
// 		int j=1;

// 		while(j<=row){
// 			cout<<j;
// 			j++;
// 		}

// 		//for reverse number(3rd triangle)
// 		int k=row-1;
// 		while(k){
// 			cout<<k;
// 			k--;
// 		}
// 		cout<<endl;
// 		row++;
// 	}
// 	return 0;
// }
//dabbang qns
// int main(){
// 	int n;
// 	cin>>n;
// 	for(int row=1;row<=n;row++){
// 		//1st triangle to print number in decreasing order
// 	for(int k=1;k<=n-row+1;k++){
// 		cout<<k<<" ";
// 	}
// 		//2nd triangle to print star evenly
// 		int star=2;
// 		while(star<=row){
// 			cout<<"**";
// 			star=star+1;
// 		}
// 		//3rd triangle reverse of 1st triangle
// 			int j=n-row+1;
// 		while(j){
// 			cout<<j<<" ";
// 			j--;
// 		}
// 		cout<<endl;

// 	}
// }
// Print all prime numbers between 2 to N
// int main(){
// 	int n;
// 	cin>>n;
// 	int i=2;
// 	bool isPrime=1;
// 	while(i<=n){		
// 		for(int j=2;j<i;j++){
// 			if(i%j==0){
// 				isPrime=0;
// 				break;
// 			}
// 		}
// 		if(isPrime){
// 			cout<<i<<" ";
// 		}
// 		i++;
// 	}
// 	return 0;
// }
// int main(){
// int n;
//     cin>>n;
//     for(int row=1;row<=n;row++){
//         //space 
//         int space=n-row+2;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         //printing number
//         int j=1;
//         while(j<=row){
//             // cout<<row+j-1<<" ";
//             cout<<row+j-1;
//             j++;
//         }
//         //printing rreverse
//         int rev=row;
//         while((rev/2)>=1){
//             cout<<row-2+rev;
//             rev--;
//         }

//         //printing number ulta

//             cout<<endl;
//         }

//     }
// int main(){
//     int n=7;
//     int row=1;
//     while(row<=n){
//         int j=1;
//         while(j<=row){
//             cout<<j;
//             ++j;
//         }
//         int star=n-row;
//         while(star>=1){
//             cout<<"*";
//             star--;
//         }
//         cout<<endl;
//         row++;
//     }
// }
// int main(){
//     int n=5;
//     int row=1;
//     while(row<=n){
//         // star
//         int space=1;
//         while(space<=n-row){
//             cout<<" ";
//             space++;
//         }
//         int k=1;
//         while(k<=n){
//             if(row==1 || row==n || k==1 || k==n){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//             k++;
//         }
//         cout<<endl;
//         row++;
//     }
// }
// int main() {
// 	int n=5;
// // cin>>n;
// for(int i=1;i<=(2*n-1);i++){
// 	//for space 
// 	for(int j=1;j<=n/2;j--){
// 		cout<<" ";
// 	}
	
// 	// for printing stars
// 	for(int j=1;j<=i;j++){
// 		cout<<"*";
// 	}
// 	cout<<endl;	
// }
// 	return 0;
// }
// int main(){
//     // int a=2;
//     // cout<<~a;        
//     int a=2;
//     int b=a++;
//     // 2,a=3
//     int c=++a;
//     // 4,4
//     cout<<b<<endl;;
//     cout<<c<<endl;
//     return 0;
// }
// int main(){
//     int n=5;
//     int row=1;
//     while(row<=n){
//         int j=1;
//         while(j<=row){
//             if(j==1 || j==row)
//             cout<<row<<"    ";
//             else{
//                 cout<<"0"<<"    ";
//             }
//         j++;
//         }
//         cout<<endl;
//         row++;
//     }
// }
// int main(){
//     int n=5;
//     int row=n;
//     while(row>=0){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
        
//         row--;
//     }


//     return 0;
// }
// int main() {
// 	int n=7;
// 	int row=1;
// 	while(row<=(n/2)+1){
// 		//forward print number
// 		int j=1;
// 		while(j<=row){
// 			cout<<row-j+1;
// 			++j;
// 		}
//         cout<<endl;
//         		//space
                
// 		//backward print number
   

// 		///ulta
// 		row++;
// 	}
// 	return 0;
// }
// /binary to decimal
// int main(){
// 	int n;
// 	cin>>n;

// 	int ans=0;
// 		int i=0;
// 		if(n>=0){
// 	while(n!=0){
// 		int bit= n & 1;
// 	ans+=(bit*pow(10,i));
// 	n=n >> 1;
// 	i++;
// 	}
// 		cout<<ans<<endl;
// 		}
// 		else{
// 			while(n!=0){
// 		int bit= n & 1;
// 	ans+=(bit*pow(10,i));
// 	n=n >> 1;
// 	i++;
// 	}
// 			int temp=~ans+1;
// 			cout<<temp;
// 		}


// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
	// for(int i=0;i<n-1;i++){
	// 	for(int j=0;j<n-1;j++){
	// 		if(arr[j]>arr[j+1]){
	// 			//swap
	// 			int temp=arr[j];
	// 			arr[j]=arr[j+1];
	// 			arr[j+1]=temp;
	// 		}
	// 	}
	// }
	// 	for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<" ";
	// }
// 	sort(arr,arr+n);
// 		for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }

// int main(){
// 	int n,sum;
// 	cin>>n;
// 	int count=0
// 	while(n!=0){
// 		int temp=n%10;
// 	 sum=sum+(temp*tyemp*temp)
// 		n/=10;
// 	}
// 	if(sum==n){
// 		cout<<true;
// 	}
// 	else{
// 		cout<<false;
// 	}
// 	return 0;
// }
// int main(){
// int n=3;
//     // cin>>n;
//     for(int row=1;row<=n;row++){
//         //space 
//         int space=n-row+2;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         //printing number
//         int j=1;
//         while(j<=row){
//             // cout<<row+j-1<<" ";
//             cout<<row+j-1;
//             j++;
//         }
//         //printing rreverse
//         int rev=row;
//         while((rev/2)>=1){
//             cout<<row-2+rev;
//             rev--;
//         }

//             cout<<endl;
//         }
// 	int row1=n;
// 	while(row1>0){
// 		   //printing number ulta
// 		int i=1;
// 		while(i<=row1-1){
// 			cout<<row1-i+1  ;
// 			i++;
// 		}
// 		 int rev=row1;
//         while((rev/2)>=n-1){
//             cout<<row1-rev+1;
//             rev--;
//         }
// 		cout<<endl;
// 		row1--;
// 	}

//     }
//mountain problem
// int main(){
// 	int n=4;
// 	// cin>>n;
// 	int row=1;
// 	while(row<=n){
// 		int j=1;
// 		while(j<=n){
// 			if(j<=row){
// 				cout<<j;
// 			}
// 			else{
// 				cout<<" ";
// 			}
// 		j++;
// 		}
// 		int k=n;
// 		while(k>0){
// 			if(j<=row){
// 				cout<<k;
// 			}
// 			else{
// 				cout<<" ";
// 			}
// 			k--;
// 		}
// 		cout<<endl;
// 		row++;
// 	}
// 	return 0;
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int x=0,y=0,n,k;
//     char ch;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
        
//         cin>>ch;
//         if(ch=='N')
//         {
//             x++;
//         }
//         else if(ch=='S')

//         {
//           x--;
//         }
//         if(ch=='W')
//         {
//             y++;
//         }
//         else if(ch=='E')
//         {
//             y--;
//         }

//     }

//     if(x>0)
//     {
//         cout<<"N"<<endl;
//     }
//     else if(x<0)
//     {
//         cout<<"S"<<endl;
//     }
//     if(y>0)
//     {
//         cout<<"W"<<endl;
//     }
//     else if(y<0)
//     {
//         cout<<"E"<<endl;
//     }
	

//     return 0;
// }
/* 
      *
    * * *
  * * * * *
    * * *
      *
      
      */
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         //space
//        int  space=1;
//         while(space<=n-i){
//             cout<<" ";
//             space++;
//         }
//         //star
//         int star=1;
//         while(star<=2*i-n/2-1){
//             cout<<"*"<<" ";
//             star++;
//         }
//     cout<<endl;
//     }
//     //for decreasing 
// for(int i=1;i<=n;i++){
//     n=n-2;
// //space
// int space=1;
// while(space<=n-i){
//     cout<<" ";
//     space++;
// }

//     int row=n;

//     while(row>=2*i-1){
//         cout<<"*"<<" ";
//         row--;
//     }

//     cout<<endl;
// }
    
// return 0;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int f_h = n/2 + 1;
//     int s_h = n/2;
//     for(int i=1;i<=f_h;i++)
//     {
//        for(int j=1;j<=f_h-i;j++)
//         {
//             cout<<"  ";
//         }
//         for(int j=1;j<=2*i-1;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=s_h;i>=1;i--)
//     {
//         for(int j=1;j<=f_h-i;j++)
//         {
//             cout<<"  ";
//         }
//         for(int j=1;j<=2*i-1;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// void printamstrongnumber(int n){
//       int count=0;
//       int x=n;
//       while(x!=0){
//           x=x/10;
//           count++;
//       }
//       x=n;

//       int pow_s=0;
//       while(x!=0){
//           int digit=x%10;
//           pow_s+=pow(digit,count);
//           x/=10;
//       }
//       if(pow-s==n){
//           cout<<n<<endl;
//       }
// }
// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     for(int i=n1;i<=n2;i++){
//         printamstrongnumber(i);
//     }
// }
      /*     5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 */
             
// int main(){
//     int n=5;
//     for(int i=n;i>=0;i--){
//         int row=n;
//         while(row>=i){
//             cout<<row<<" ";
//             row--;
//         }
//         //space
//         for(int i=0;i<=2*n+1;i++){
//             cout<<" ";
//             i++;
//         }
//         for(int j=i+1;j<=5;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=5;i++){
//         int row=n;
//         while(row>=i){
//             cout<<row<<" ";
//         row--;
//         }
//         for(int j=n;j>=i;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
// /holllow diamond 
/*
     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
// */
// int main(){
//     int n=5;
// for(int i=0;i<n;i++){
//     for(int j=1;j<=n;j++){
//         if(i+)
//     }
// }
// return 0;
// }
// int main(){
//   int n=6;
//   for(int i=1;i<=n;i++){
//     if(i==1){
//       for(int j=1;j<=n;j++){
//         cout<<i<<endl;
//       }
//     }
//     if(i==2){
//       for(int j=1;j<n;i++){
//         cout<<j<<endl;
//       }
//     }
//   }
  
// }
/*
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1 
*/
// int main(){
//   int n=7,space;
//   int row=1;
//   int s_l=(n/2)+1;
//   int u_l=(n/2);
//   while(row<=s_l){
//   //  int space=2*row-3;
//   //  while(space<=s_l){
//   //    cout<<" ";
//   //    space++;
//   //  }
//    for(int k=row;k>0;k--){
//      if(k<=n/2+1){
//        cout<<k;
//      }

//    }
//    if(i=!)
//    int j=row;
//    while(j>=0){
//      if(j==1){
//        continue;
//      }
//      cout<<j<<" ";
//      j--;
//    }
   
   
//     int i=1;
// while(i<=row){
//   cout<<i<<" ";
//   i++;
// }
// for(int i=row;i<=row+1;i++){
//   cout<<" ";
// }
// cout<<endl;
// row++;
//   }
//   int ro=u_l;
//   while(ro>0){
    
//     int i=ro;
//     while(i>0){
//       cout<<i<<" ";
//       i--;
//     }
//         int j=1;
//     while(j<=ro){
//        if(j==1){
//        continue;
//      }
//       cout<<j<<" ";
//       j++;
//     }
//    cout<<endl;
//   ro--;
//   }
// return 0;
// }
// int main(){
//   int n=7,s=1;
//   for(int i=1;i<=n/2+1;i++){
//     for(int j=1;j<=n-(2*i-1);j++){
//       cout<<" ";
//     }
//     for(int k=i;k>0;k--){
//       if(k<=n/2+1){
//         cout<<k;
//       }
//     }
//     if(i!=1){
//       for(int l=1;l<=(2*s-1);l++){
//         cout<<" ";
//       }
//       s+=1;
//     }
//     for(int m=1;m<=i;m++){
//       if(i!=1){
//         cout<<m;
//       }
//     }
//     cout<<endl;
//   }
//   for(int i=n/2;i>0;i--){
//     for(int j=(2*i-1);j>0;i--){
//       cout<<" ";
//     }
    
//   }
//   return 0;
// }
// int main(){
//   int n=5;
//   int val=-20;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     arr[i]=val;
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }
/*
             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5
*/
// int main(){
//   int n=5;
//   // cin>>n;
//   cout<<endl;
//   for(int i=n;i>=0;i--){
//     //number prt-1
//     for(int j=n;j>=i;j--){
//       cout<<j<<" ";
//     }
//     //space
//     for(int space=2*i-1;space>=1;space--){
//       cout<<"  ";
//     }
//      //number prt-2
//     for(int j=i;j<=n;j++){
//       if(j!=0){
//         cout<<j<<" ";
//       }

//     }
//     cout<<endl;
//   }

//   for(int i=1;i<=n;i++){
//     //number prt-1
//     for(int j=n;j>=i;j--){
//       cout<<j<<" ";
//     }
//     //space
//     for(int space=1;space<=2*i-1;space++){
//       cout<<"  ";
//     }
//     //number prt-2
//     for(int j=i;j<=n;j++){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// // }
// int search(int n,long long arr[],int key){
// 	for(int i=0;i<2*n;i++){
// 		if(arr[i]==key || arr[i]>key){
// 			return arr[i];
// 		}
// 	}
// 	return -1;
// }
// int main() {
// 	int key;
//   char n;
// 	cin>>key;
// 	cin>>n;
// 	long long arr[10000];
// 	for(int i=0;i<2*n;i++){
// 		cin>>arr[i];
// 	}
// 	// for(int i=0;i<n;i++){}
// 	search(n,arr,key);
// 	return 0;
// }
// int SumArr(int n,int arr[]){
//   int sum=0;
//   for(int i=0;i<n;i++){
//     sum+=arr[i];
//   }
//   return sum;
// }
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   cout<<SumArr(n,arr)<<endli;
//   return 0;
// }
//reverse arr
// void reverseArr(int n,int arr[]){
//   int start=0;
//   int end=n-1;
//   while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
//   }
// }
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   reverseArr(n,arr);
//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//     return 0;
// }
// void reverseArr(int n,int arr[]){
// int   start=0;
//   int end=n-1;
//   while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
//   }
// }
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   reverseArr(n,arr);
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }
///swap alternate 
//123456
//21 43  65
// void swapAlternate(int n,int arr[]){
//   for(int i=0;i<n;i+=2){
//     if(i+1<n){
//       swap(arr[i],arr[i+1]);
//     }
    
//   }
// }
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   swapAlternate(n,arr);
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
 
//   return 0;
// }
//unique element in the aarray
//do xor kuki same aata h toh 0 deta h 
// int UniqueEle(int n,int arr[]){
//   int ans=0;
//   for(int i=0;i<n;i++){
//     ans=ans^arr[i];
//   }
//   return ans;
// }
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++)
//   cin>>arr[i];
//   cout<<UniqueEle<<endl;.
//   return 0;
// } 
// hollow diamiond
// int main(){
//   int n=7;
//   for(int i=1;i<=n/2+1;i++){
//     if(i==1){
//       //print n-stars
//       for(int j=1;j<=n;j++){
//         cout<<"*";
//       }
//       cout<<endl;
//       continue;
//     }
//     //star
//     for(int j=1;j<=n-i-1;j++){
//       cout<<"*";
//     }
//     //space
//     for(int j=1;j<=2*i-3;j++){
//       cout<<" ";
//     }
//     //star
//  for(int j=1;j<=n-i-1;j++){
//       cout<<"*";
//     }
// cout<<endl;
// }
//  for(int i=2;i<=n/2+1;i++){
//     if(i==n/2+1){
//       //print n-stars
//       for(int j=1;j<=n;j++){
//         cout<<"*";
//       }
//       cout<<endl;
//       continue;
//     }
//     //star
//     for(int j=1;j<=n-i-1;j++){
//       cout<<"*";
//     }
//     //space
//     for(int j=1;j<=2*i-3;j++){
//       cout<<" ";
//     }
//     //star
//  for(int j=1;j<=n-i-1;j++){
//       cout<<"*";
//     }
// cout<<endl;
// }
// return 0;
// }

// int main(){
//   int n=7;
//   // cin>>n;
//   for(int i=1;i<=n/2+1;i++){
//     if(i==1){
//       //print n-stars
//       for(int j=1;j<=n;j++){
//         cout<<"*"<<" ";
//       }
//       cout<<endl;
//       continue;
//     }
//     //star
//     for(int j=1;j<=n-i-1;j++){
//       cout<<"*"<<" ";
//     }
//     //space
//     for(int j=1;j<=2*i-3;j++){
//       cout<<" ";
//     }
//     //star
//  for(int j=1;j<=n-i-1;j++){
//       cout<<"*"<<" ";
//     }
// cout<<endl;
// }
//  for(int i=2;i<=n/2+1;i++){
//     if(i==n/2+1){
//       //print n-stars
//       for(int j=1;j<=n;j++){
//         cout<<"*"<<" ";
//       }
//       cout<<endl;
//       continue;
//     }
//     //star
//     for(int j=1;j<=n-i-1;j++){
//       cout<<"*"<<" ";
//     }
//     //space
//     for(int j=1;j<=2*i-3;j++){
//       cout<<" ";
//     }
//     //star
//  for(int j=1;j<=n-i-1;j++){
//       cout<<"*"<<" ";
//     }
// cout<<endl;
// }
// return 0;
// }
// loops
// int main(){
// int n,t,ans=0;
// cin>>t;
// while(t--){
//   cin>>n;
//   ans=0;
//   while(n>0){
//     if(n&1)
//     ans++;
//     n=n>>1;
//   }
//   cout<<ans<<endl;;
// }
//   return 0;
// }
//pattern
// int main(){
// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//   for(int j=1;j<=row;j++){
//     if(j==1 || j==row){
//       cout<<row<<" ";
//     }
//     else{
//       cout<<"0"<<" ";
//     }
//   }
//   cout<<endl;
// }
//   return 0;
// }
// pattern-1
// int main()
// {
//   int n=6,ans=1;
//   // cin>>n;
// for(int row=1;row<=n;row++){
//   for(int i=0;i<=row;i++){
//     if(i==0 || i==n){
//       ans=1;
//     }
//     else{
//       ans=ans*(row-i+1)/i;
//     }
//     cout<<ans<<"\t";
//   }
//   cout<<endl;
// }
//     return 0;
// }

// int main()
// {
// int n=5;
// for(int i=1;i<=n;i++){
//   if(i==1|| i==n){
// for(int j=0;j<n;j++){
//   cout<<"*"<<" ";
//   }
//   else{
//     if(j==n/2){

//     }
//   }
// }
// cout<<endl;
// }

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int t=((n+1)/2)-1;
//     int k=1;
//     int m=n-4;
//     int f=((n+1)/2)-1;
//     for (int i = 1; i <= (n+1)/2; i++)
//     {
//         if (i==1 || i==n)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 cout<<"*    ";
//             }
//             cout<<endl;
//         }
//         else
//         {
//             for (int j = 1; j <=t; j++)
//             {
//                 cout<<"*    ";
//             }
//             t--;
//             for (int j = 1; j <=k; j++)
//             {
//                 cout<<"     ";
//             }
//             k=k+2;
//             for (int j = 1; j <= f; j++)
//             {
//                 cout<<"*    ";
//             }
//             f--;
//             cout<<endl;
//         }
        
//         // k=k-2;
//     }
//     for (int i = 1; i < (n+1)/2; i++)
//     {
//         if (i==((n+1)/2)-1)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 cout<<"*    ";
//             }
//             cout<<endl;
//             // cout<<"*    ";
//         }
//         else
//         {
//             for (int j =1; j <= i+1; j++)
//             {
//                 cout<<"*    ";
//             }
//             for (int j = 1; j <=m; j++)
//             {
//                 cout<<"     ";
//             }
//             m=m-2;
//             for (int j = 1; j <=i+1; j++)
//             {
//                 cout<<"*    ";
//             }
//             cout<<endl;
//         }
        
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int t=n-1;
//     int x=(n+1)/2;
//     int y=2;
//     int m=-1;
//     int z=x-1;
//     int k=z;
//     int p=z;
//     //for upper half
//     for (int i = 1; i <=x  ; i++)
//     {
//         int sum=i;
//         //for blank spaces
//         for (int j = 1; j <= t; j++)
//         {
//             cout<<"  ";
//         }
//         t=t-2;
//         //for left numbers
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<sum<<" ";
//             sum--;
//         }
//         //for center spaces
//         for (int j = 1; j <=m; j++)
//         {
//             cout<<"  ";
//         }
//         m=m+2;
//         //for right numbers
//         int num=1;
//         for (int j = 1; j <= i; j++)
//         {
//             if (i==1)
//             {
//                 break;
//             }
//             else
//             {
//                 cout<<num<<" ";
//                 num++;
//             }
//         }
//         cout<<endl;
//     }
//     // for lower half
//     for (int i = 1; i <=x-1; i++)
//     {
//         //left spaces
//         for (int j = 1; j <= y; j++)
//         {
//             cout<<"  ";
//         }
//         y=y+2;
//         //left numbers
//         int sum2=p;
//         for (int j = 1; j <= z; j++)
//         {
//             cout<<sum2<<" ";
//             sum2--;
//         }
//         p--;
//         // x--;
//         //center spaces
//         for (int j = 1; j <= k; j++)
//         {
//             cout<<"  ";
//         }
//         k=k-2;
//         //for right numbers
//         int num=1;
//         for (int j = 1; j <= z; j++)
//         {
//             if (i==x-1)
//             {
//                 break;
//             }
//             else
//             {
//                 cout<<num<<" ";
//                 num++;
                
//             }
            
//         }
//         z--;
//         cout<<endl;
//     }
    
//     return 0;
// }
//increasing Decreasing Sequence
//find the pivot element
// int getPivot(int *arr,int n){
//   int s=0;
//   int e=n-1;
//   int mid=s+(e-s)/2;
//   while(s<e){
//     if(arr[mid]>=arr[0]){
//       s=mid+1;
//     }
//     else{
//       e=mid;
//     }
//     mid=s+(e-s)/2;
//   }
//   return s;
// }
// int main(){
//     int arr[5]={1,8,10,3,17};
//     cout<<"Pivot is "<<getPivot(arr,5)<<endl;
//     return 0;
// }
int main() {
int n=INT_MAX;
cout<<n<<endl;
cout<<n+1<<endl;
// int arr[1000];
// for(int i=0;i<n;i++){
// 	cin>>arr[i];
// }
// int k;
// cin>>k;
// sort(arr,arr+n);

// for(int i=0;i<n;i++){
// int start=i+1;
// int end=n-1;
// if(arr[i]+arr[start]+arr[end]==k){
// 	cout<<arr[i]<<","<<" "<<arr[start]<<" "<<"and "<<arr[end]<<endl;
// }
// else if(arr[i]+arr[start]+arr[end]<k){
// 	continue;
// }
// else{
// 	end--;
// }
// }
	
	return 0;
}