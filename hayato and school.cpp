#include<iostream>
#include<vector>
using namespace std;
void check()
{
    int n = 0;
    cin >> n;
    vector<int> arr(n);
    for(int j=0; j<n; j++)
        cin >> arr[j];
    for(int i=0; i<n; i++)
    {
        for(int f = i+1; f<n; f++)
        {
            for(int l = f+1; l<n; l++)
            {
                if((arr[i]+arr[f]+arr[l])%2!=0)
                {
                    cout << "YES" <<endl;
                    cout << i+1 << " " << f+1 << " " << l+1 << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        check();
    }

}
