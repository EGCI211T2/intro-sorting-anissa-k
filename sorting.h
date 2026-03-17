void swap(int &a,int &b);
void sort(int *a,int N);
void display(int *a,int N);
void SelectionSort(int *a, int N);
void InsertionSort(int *a, int N);

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void SelectionSort(int *a, int N) //select (find the smallest and swap with the first one)
{
    int i,j;
    int *p; //using pointer
    int minIndex; //location of a[i]
    for(j=0; j<N-1; j++)
    {
        //always swap with j th location
        //int main a[j]; can be any value, set it to swap
        p=&a[j];
        minIndex = j;
        for(i=j+1; i<N; i++) //start witht the lowest value location
        {
            if(*p > a[i])
            {
                p=&a[i];
                //min = a[i];
                minIndex = i; // set the location
            }
        }
        swap(a[j], *p); //swap min with the first location
    }
}

void sort(int *a, int N) //bubble
{
    int i,j;
    bool sorted;

    for(i=0; i<N-1; i++)
    {
        sorted=true; //check if function swapped?
        for(j=0; j<N-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
                sorted = false;
            } //swapping
        }
        if(sorted)
        break;
    }
    cout<<endl;
}

void InsertionSort(int *a, int N)
{
    int i, j, key;

    for(i=1; i<N; i++) // starting with 2nd
    {
        key = a[i]; //inserting key
        j = i-1;

        //moving larger one to the right
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        //inserting key in the correct position
        a[j + 1] = key;
    }
}

void display(int *a, int N)
{
    int i;
    for(i=0; i<N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
