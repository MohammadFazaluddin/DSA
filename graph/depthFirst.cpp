
#include <iostream>
#include <variant>

using namespace std;

const int MAX = 8;

class graph 
{
    private:
        int visited[MAX];
        int arr[MAX][MAX];

    public:

        graph() 
        {
            int i, j;
            for (i = 0; i < MAX; i++) 
                visited[i] = 0;

            for (i = 0; i < MAX; i++)         
                for (j = 0; j < MAX; j++)
                    arr[i][j] = 0;

            arr[0][1] = arr[1][0] = 1;
            arr[0][2] = arr[2][0] = 1;
            arr[1][3] = arr[3][1] = 1;
            arr[1][4] = arr[4][1] = 1;
            arr[2][5] = arr[5][2] = 1;
            arr[2][6] = arr[6][2] = 1;
            arr[3][7] = arr[7][3] = 1;
            arr[4][7] = arr[7][4] = 1;
            arr[5][7] = arr[7][5] = 1;
            arr[6][7] = arr[7][6] = 1;

        }
        
        // depth first search
        void dfs(int size, int index) 
        {
            int i;
            visited[index] = 1;
            cout << index + 1 << " ";
            
            for (i = 0; i < size; i++) 
                if (visited[i] == 0 && arr[index][i] == 1)
                    dfs(size, i);
        }
};


int main() 
{

    graph g;
    g.dfs(8, 0);
    return 0; 

}
