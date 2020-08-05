

#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{   //cout<<"-hello";
int total=0;
    while(n!=0)
    {
        total += n;
        n--;
    }
    return total;
}
int main()
{
    //cout<<"Hello";
int test;
cin>>test;
while(test!=0)
{
    int d,n;
    cin>>d>>n;
    while(d!=0)
    {
       n=sum(n);
        d--;
    }
    cout<<n<<endl;
    test--;
}

return 0;
}


/*
------------------------------------------------------------------------------------------------------------------------------
Puppy and Sum Problem Code: PPSUM
Add problem to Todo list
Submit

Read problems statements in Mandarin Chinese, Russian and Vietnamese as well.
Yesterday, puppy Tuzik learned a magically efficient method to find the sum of the integers from 1 to N. He denotes it as sum(N). But today, as a true explorer, he defined his own new function: sum(D, N), which means the operation sum applied D times: the first time to N, and each subsequent time to the result of the previous operation.

For example, if D = 2 and N = 3, then sum(2, 3) equals to sum(sum(3)) = sum(1 + 2 + 3) = sum(6) = 21.

Tuzik wants to calculate some values of the sum(D, N) function. Will you help him with that?

Input
The first line contains a single integer T, the number of test cases. Each test case is described by a single line containing two integers D and N.

Output
For each testcase, output one integer on a separate line.

Constraints
1 ≤ T ≤ 16
1 ≤ D, N ≤ 4
Example
Input:
2
1 4
2 3

Output:
10
21
Explanation:
The first test case: sum(1, 4) = sum(4) = 1 + 2 + 3 + 4 = 10.

The second test case: sum(2, 3) = sum(sum(3)) = sum(1 + 2 + 3) = sum(6) = 1 + 2 + 3 + 4 + 5 + 6 = 21.
*/
