
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <variant>

using namespace std;

const int MAX = 10;

class queue 
{
    private:
        int arr[MAX], front, rear;

    public:
        queue()
        {
            front = rear = -1;
        }

        // adds an item to the queue
        void addq(int e) 
        {
            if (rear == MAX - 1)
            {
                cout << "Queue is full" << endl;
                return;
            }

            rear++;
            arr[rear] = e;

            if (front == -1)
                front = 0;
        }

        int delq() 
        {
            int item;
            if (front == -1)
            {
                cout << "Queue is empty!" << endl;
                return NULL;
            }

            item = arr[front];
            arr[front] = 0;

            if (front == rear) 
                front = rear = -1;
            else 
                front++;

            return item;
        }

        bool isempty() 
        {
            if (front == -1 && rear == -1)
                return true;
            else 
                return false;
        }
};

class graph
{
    private:
        int arr[MAX][MAX];
        int visited[MAX];
    
    public:
        graph() 
        {
            int i, j;
            
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

            for (i = 0; i < MAX; i++)
                visited[i] = 0;
        }

        void bfs(int size)
        {
            int index, i;

            queue q;
            q.addq(0);

            while (!q.isempty())
            {
                index = q.delq();

                if (visited[index] == 0)
                {
                    visited[index] = 1;

                    cout << index + 1 << " ";

                    for (i = 0; i < size; i++)
                        if (visited[i] == 0 && arr[index][i] == 1)
                            q.addq(i);
                }

            }
        }
};

int main()
{

    graph g;
    g.bfs(8);

    return 0;
}


