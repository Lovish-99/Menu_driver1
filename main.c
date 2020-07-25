#include<stdio.h>
#include<stdlib.h>

struct array
{
    int size;
    int a[10];
    int length;
};

void Display(struct array );
void Insert(struct array ,int ,int );
void Delete(struct array ,int );
void Append(struct array arr,int element);
void Max(struct array );
void Min(struct array );
//void lines();
void Linear_search(struct array ,int );
void Binary_search(struct array ,int );
void get(struct array ,int );
void Sum(struct array );
float Avg(struct array );
//void Reverse(struct array );
//void Check_sorted(struct array );
//void Merge(struct array ,struct array );
//void Union(struct array ,struct array );
//void Intersect(struct array ,struct array );
//void Difference(struct array ,struct array );
//void Sum_even_places(struct array);
//void Sum_odd_places(struct array );
//void Replace_even_places(struct array ,int );
//void Replace_odd_places(struct array ,int );
//void swap(int,int);


int main()
{
    struct array arr;
    int x,l,ch,i;
    printf("Enter the size of the structure array: ");
    scanf("%d",&arr.size);
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
        printf("1.  Append the element in array.\n ");
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
                Append(arr,x);
                break;
            case 2:
                printf("Enter the element and location:");
                scanf("%d\t%d",&x,&l);
                Insert(arr,l,x);
                break;
            case 3:
                printf("Enter the location:");
                scanf("%d",&l);
                Delete(arr,l);
                break;
            case 4:
                Max(arr);
                break;
            case 5:
                Min(arr);
                break;
            case 6:
                printf("Enter the element:");
                scanf("%d",&x);
                Linear_search(arr,x);
                break;
            case 7:
                printf("Enter the element:");
                scanf("%d",&x);
                Binary_search(arr,x);
                break;
            case 8:
                printf("Enter the location:");
                scanf("%d",&l);
                get(arr,l);
                break;
            case 9:
                Sum(arr);
                break;
            case 10:
                Avg(arr);
                break;
            case 11:
                //Reverse(arr);
                break;
            case 12:
                //Check_sorted(arr);
                break;
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
                //Sum_even_places(arr);
                break;
            case 18:
                //Sum_odd_places(arr);
                break;
            case 19:
                printf("Enter the element:");
                scanf("%d",&x);
                //Replace_even_places(arr,x);
                break;
            case 20:
                printf("Enter the element:");
                scanf("%d",&x);
                //Replace_odd_places(arr,x);
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

void Display(struct array arr)
{
    int i;
    printf("Elements are: ");
    for(i=0;i<arr.length;i++)
    {
        printf("%d \t",arr.a[i]);
    }
}

void Insert(struct array arr, int l,int x)
{
    int i;
    for(i=l;i<arr.length;i++)
    {
        arr.a[i+1]=arr.a[i];
    }
    arr.a[l] = x;
    arr.length++;
}

void Append(struct array arr,int x)
{
    arr.a[arr.length] = x;
}

void Delete(struct array arr,int l)
{
    int i;
    for(i=l;i<arr.length;i++)
        arr.a[i] = arr.a[i+1];
}

void get(struct array arr,int l)
{
    return arr.a[l];
}

void Sum(struct array arr)
{
    int i,s = 0;
    for(i=0;i<arr.length;i++)
        s = s+arr.a[i];
    return s;
}

float Avg(struct array arr)
{
    int i,s = 0;
    float av;
    for(i=0;i<arr.length;i++)
        s = s+arr.a[i];
    av = s/6;

}

void Max(struct array arr)
{
    int i,max = 0;
    for(i=0;i<arr.length;i++)
    {
        if(arr.a[i]>max)
            max = arr.a[i];
    }
    return max;
}

void Min(struct array arr)
{
    int i, min = 0;
    for(i=0;i<arr.length;i++)
    {
        if(arr.a[i]<min)
            min = arr.a[i];
    }
    return min;
}

void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void Linear_search(struct array arr,int x)
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

void Binary_search(struct array arr,int x)
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

//void Reverse(struct array arr)

