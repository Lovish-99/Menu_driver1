#include<stdio.h>
#include<stdlib.h>

struct array
{
    int a[20];
    int length;
};

struct array arr;

void Display();
void Insert(int ,int );
void Delete(int );
void Append(int );
int Max();
int Min();
int Linear_search(int );
int Binary_search(int );
int get(int );
int Sum();
float Avg();
void Reverse();
int Check_sorted();
void Merge();
void Union();
void Intersect();
void Difference();
int Sum_even_places();
int Sum_odd_places();
void Replace_even_places(int );
void Replace_odd_places(int );
int swap(int,int);


int main()
{
    int x,l,ch,i,y,temp=0;
    printf("Enter the length of the structure array: ");
    scanf("%d",&arr.length);

    for(i=0;i<arr.length;i++)
    {
        scanf("%d",&arr.a[i]);
    }

    do{
        printf("\n\n");
        printf(" ---------------------------------\n");
        printf("\n  MENU LIST OF THE ARRAY PROGRAMS\n");
        printf(" ---------------------------------\n\n");
        printf(" 1.  Append the element in array.\n ");
        printf("2.  Insert the element in array.\n ");
        printf("3.  Delete the element from the array.\n ");
        printf("4.  Maximum of the array.\n ");
        printf("5.  Minimum of the array.\n ");
        printf("6.  Linear Search in the array.\n ");
        printf("7.  Binary Search in the array.\n ");
        printf("8.  Get element of an array\n ");
        printf("9.  Sum of the elements of the array.\n ");
        printf("10. Average of the elements of the array.\n ");
        printf("11. Reverse of the elements of the array.\n ");
        printf("12. Sorting the array.\n ");
        printf("13. Merge the elements of arrays.\n ");
        printf("14. Union of arrays.\n ");
        printf("15. Intersect of arrays.\n ");
        printf("16. Difference of arrays with respect to each other..\n ");
        printf("17. Sum of the even places of the array elements.\n ");
        printf("18. Sum of the odd places of the array elements.\n ");
        printf("19. Replace even places by the given element of the array. \n ");
        printf("20. Replace odd places by the given element of the array.\n ");
        printf("21. Display the elements of the array.\n ");
        printf("\n ");

        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter the element:");
                scanf("%d",&x);
                Append(x);
                break;
            case 2:
                printf("Enter the element and location:");
                scanf("%d\t%d",&x,&l);
                Insert(l,x);
                break;
            case 3:
                printf("Enter the location:");
                scanf("%d",&l);
                Delete(l);
                break;
            case 4:
                printf("%d",Max());
                break;
            case 5:
                printf("%d",Min());
                break;
            case 6:
                printf("Enter the element:");
                scanf("%d",&x);
                printf("%d",Linear_search(x));
                break;
            case 7:
                printf("Enter the element:");
                scanf("%d",&x);
                printf("%d",Binary_search(x));
                break;
            case 8:
                printf("Enter the location:");
                scanf("%d",&l);
                printf("%d",get(l));
                break;
            case 9:
                printf("%d",Sum());
                break;
            case 10:
                printf("%f",Avg());
                break;
            case 11:
                Reverse();
                break;
            case 12:{
                Check_sorted();
                break;
            }
            case 13:
                //Merge(arr,arr2);
                break;
            case 14:
                //Union(arr,arr2);
                break;
            case 15:
                //Intersect(arr,arr2);
                break;
            case 16:
                //Difference(arr,arr2);
                break;
            case 17:
                printf("Sum of the even places elements is:%d",Sum_even_places());
                break;
            case 18:
                printf("Sum of the odd places elements is:%d",Sum_odd_places());
                break;
            case 19:
                printf("Enter the element:");
                scanf("%d",&x);
                Replace_even_places(x);
                break;
            case 20:
                printf("Enter the element:");
                scanf("%d",&x);
                Replace_odd_places(x);
                break;
            case 21:
                Display(arr);
                break;
            case 22:
                break;
        }
    }
    while(ch<22);

    return 0;
}

void Display()
{
    int i;
    printf("Elements are: ");
    for(i=0;i<arr.length;i++)
    {
        printf("%d \t",arr.a[i]);
    }
}

void Insert( int l,int x)
{
    int i;
    for(i=arr.length-1;i>=l;i--)
    {
        arr.a[i+1]=arr.a[i];
    }
    arr.a[l] = x;
    arr.length++;
}

void Append(int x)
{
    arr.a[arr.length++] = x;
}

void Delete(int l)
{
    int i;
    for(i=l;i<arr.length;i++)
        arr.a[i] = arr.a[i+1];
    arr.length--;
}

int get(int l)
{
    return arr.a[l];
}

int Sum()
{
    int i,s = 0;
    for(i=0;i<arr.length;i++)
        s = s+arr.a[i];
    return s;
}

float Avg()
{
    int i;
    float s = 0,av;
    for(i=0;i<arr.length;i++)
        s = s+arr.a[i];
    av = s/6;
    return av;

}

int Max()
{
    int i,max = 0;
    for(i=0;i<arr.length;i++)
    {
        if(arr.a[i]>max)
            max = arr.a[i];
    }
    return max;
}

int Min()
{
    int i, min = 0;
    for(i=0;i<arr.length;i++)
    {
        if(arr.a[i]<min)
            min = arr.a[i];
    }
    return min;
}

int swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int Linear_search(int x)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(x == arr.a[i])
        {
            swap(arr.a[i],arr.a[0]);
            return i;
        }
    }
}

int Binary_search(int x)
{
    int l,mid,h;
    l = 0;
    h = 5;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(x == arr.a[mid])
            return mid;
        else if(x<arr.a[mid])
            h = mid-1;
        else
            l = mid+1;
    }
}

void Reverse()
{
    int i,j;
    printf("Elements are: ");
    for(i=arr.length-1;i>=0;i--)
    {
        printf("%d \t",arr.a[i]);
    }
}

int Check_sorted()
{
    int i,b=0;
    for(i=0;i<(arr.length-1);i++)
    {
        if(!(arr.a[i]<=arr.a[i+1]))
        {
            b=b+1;
        }
    }
    if(b>=1)
        printf("Array is not sorted.");
    else
        printf("Array is sorted.");
}

int Sum_even_places()
{
    int i,sum=0;
    for(i=0;i<arr.length;i++)
    {
        if(arr.a[i]%2)
        {
            sum=sum+arr.a[i];
        }
    }
    return sum;
}

int Sum_odd_places()
{
    int i,sum=0;
    for(i=0;i<arr.length;i++)
    {
        if(!(arr.a[i]%2))
        {
            sum=sum+arr.a[i];
        }
    }
    return sum;
}

void Replace_even_places(int x)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(arr.a[i]%2)
        {
            arr.a[i]=x;
        }
    }
}

void Replace_odd_places(int x)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(!(arr.a[i]%2))
        {
            arr.a[i]=x;
        }
    }
}
