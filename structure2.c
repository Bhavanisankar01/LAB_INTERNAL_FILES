#include<stdio.h>
struct Book
{
    char name[20];
    char subject[20];
    int pages;
    float price;
};
int main(){
    struct Book b1={"vikas","maths",304,49.0};
    printf("The book author is : %s\n",b1.name);
    printf("The book subject is : %s\n",b1.subject);
    printf("The book has pages are : %d\n",b1.pages);
    printf("The book price is : %.2f\n",b1.price);

    struct Book b2={"kedar","python",1800,1601.5};
    printf("The book author is : %s\n",b2.name);
    printf("The book subject is : %s\n",b2.subject);
    printf("The book has pages are : %d\n",b2.pages);
    printf("The book price is : %.2f\n",b2.price);

    struct Book b3={"sreenivas","c/c++",500,111.0};
    printf("The book author is : %s\n",b3.name);
    printf("The book subject is : %s\n",b3.subject);
    printf("The book has pages are : %d\n",b3.pages);
    printf("The book price is : %.2f mathrame\n",b3.price);
}
