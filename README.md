# C++ Review Log for USACO Preparation 🚀

Click on each topic below to expand and view the detailed C++ source code:

</details>

<details>
<summary><b>Review 1:  Operators: Even or Odd </b></summary>

  ```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if ( n % 2 == 0 ) {
    cout << "Even";
   }else {
    cout << "Odd";
   }
    return 0;
}
```
</details>

<details>
<summary><b>Review 2: Booleans: Voting Age </b></summary>

  ```cpp
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
   
    cin >> name;
    cin >> age;
   
    if ( age >= 18) {
      cout << name << " can vote";
    }else{
      cout << name << " cannot vote";
    }
    return 0;
}
```
</details>

<details>
<summary><b>Review 3: Conditions: Grade Calculator </b></summary>
 
  ```cpp
#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;
    
    if ( score >= 90 ){
      cout << "A";
    }else if ( 80 <= score  && score <= 89 ){
      cout << "B";
    }else if ( 70 <= score && score <= 79 ){
      cout << "C";
    }else if ( 60 <= score && score <= 69 ){
      cout << "D";
    }else {
      cout << "F";
    }
        return 0;
}
```
</details>

<details>
<summary><b>Review 4:  Loops: Multiplication Table </b></summary>

   ```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= 10) {
      cout <<n<<" x "<<i<<" = "<< n*i <<"\n";
      i++;
    }
    return 0;
}
```
</details>

<details>
<summary><b>Review 5:  Conditions: Leap Year </b></summary>

   ```cpp
#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    if (year%4 == 0 && year%100 != 0 || year%400 ==0){
      cout << "Leap year";
    }else{
       cout << "Not a leap year";
    }
    return 0;
}
```
</details>

<details> 
<summary><b>Review 6: Conditions: Day of Week </b></summary>

   ```cpp
#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;
    switch (day){
      case 1: 
        cout<< "Monday";
        break;
      case 2:
        cout<< "Tuesday";
        break;
      case 3:
        cout<< "Wednesday";
        break;
      case 4:
        cout<< "Thursday";
        break;
      case 5:
        cout<< "Friday";
        break;
      case 6:
        cout<< "Saturday";
        break;
      case 7:
        cout<< "Sunday";
        break;
      default:
        cout<< "Invalid";
    }
    return 0;
}
```
</details>

<deatails> 
<summary><b>Review 7: Conditions: Triangle Classifier </b></summary>

  ```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ( a+b>c && a+c>b && b+c>a ){
      if ( a==b && b==c ){
        cout<< "Equilateral";
      }else if (a==b || b==c || a==c ){
        cout<< "Isosceles";
      }else {
        cout<< "Scalene";
      }
    }else{
      cout<< "Not a triangle";
    }
    return 0;
}
```
</details>

<details>
<summary><b>Review 8: User input: Rectangle Area </b></summary>

   ```cpp
#include <iostream>
using namespace std;

int main() {
	int length,width;
    cin >> length >> width;
    cout << "Area = " << length * width;
	return 0;
}
 ```
 </details>

 <details>
 <summary><b>Review 9: User input: Variable swapping </b></summary>

   ```cpp
#include <iostream>
using namespace std;

int main() {
	int a,b;
    cin >> a >> b;
    int c = a;
    a = b;
    b = c;
    cout << "after swapping a = " << a << " ; b = " << b;
	return 0;
}
 ```
 </details>

<details>
<summary><b>Review 10: Conditions: Ternary Operator 1 </b></summary>
 
   ```cpp
include <iostream>
using namespace std;

int main() {
	int a,b,c;
    cin >> a >> b >> c;
    int max = (a > b && a > c)? a : (b > c ? b : c);
    cout << max;
	return 0;
}
 ```
</details>
<details>
<summary><b>Review 11: Conditions: Ternary Operator 2 </b></summary>
 
   ```cpp
#include<iostream>
using namespace std;

int main() {
	int a;
    cin >> a;
    cout << a <<(( a >= 10 && a <= 100) ? " is in the range [10, 100]" : " is not in the range [10, 100]");
	return 0;
}
```
</details>

<details>
<summary><b>Review 12: Conditions: Ternary Operator 3 </b></summary>
 
   ```cpp
#include<iostream>
using namespace std;

int main() {
	int a;
    cin >> a;
    cout << ((a >= 0 && a <= 10) ? "The score is valid" : "The score is not valid");
	return 0;
}
```
</details>

<details>
<summary><b>Review 12: Conditions: Ternary Operator 4 </b></summary>
 
   ```cpp

#include<iostream>
using namespace std;

int main() {
	int a,b,c;
    cin >> a >> b >> c;
    cout << ((a <= b && b <= c) ? "increasing" : ( a >= b && b >= c ? "decreasing" : "neither increasing nor decreasing order"));
	return 0;
}
```
</details>

<details>
<summary><b>Review 13: Switch case </b></summary>
 
   ```cpp

#include <iostream>	
using namespace std;

int main() {
	int a, b;
	char c;
	cin >> a >> c >> b;
	switch (c){
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    }
	return 0;
}
```
</details>

<details>
<summary><b>Review 14: For loop 1</b></summary>
 
   ```cpp

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << i << " ";
    }
    return 0;
}
```
</details>

<details>
<summary><b>Review 15: For loop 2</b></summary>
 
   ```cpp
#include<iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        cout << i << " ";
    }
    return 0;
}
 ```
</details>

<details>
<summary><b>Review 16: For loop 3</b></summary>
 
   ```cpp
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for ( int i = n; i >= -5; i--){
        cout << i << " ";
    }
    return 0;
}
```
</details>

<details>
<summary><b>Review 17: For loop 4</b></summary>
 
   ```cpp
#include<iostream>
using namespace std;

int main() {
    int a,b;
    int sum = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        sum = sum + i;
    }
    cout << sum;
    return 0;
}
 ```
</details>

<details>
<summary><b>Review 18: For loop 5</b></summary>
 
   ```cpp
#include<iostream>
using namespace std;

int main() {
int n;
cin >> n;
int sum = 0;
for (int i = 0; i <= n; i++){
   if (i % 2 != 0) {
   sum = sum + i;
   }
}
    cout << sum;
    return 0;
}
 ```
</details>
