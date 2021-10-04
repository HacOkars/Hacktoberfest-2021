/***
 * Binary tree representation
 */

#include <stdio.h>
#include <stdlib.h>

static inline int max(int a, int b){
    return (a>b)?a:b;
}

typedef struct binary_tree{
    int data;
    struct binary_tree *left, *right;
}btree;

btree *create_memory(){
    btree *t;
    t=(btree *)malloc(sizeof(btree));
    if(!t){
        printf("memory allocation ERROR!\n");
        exit(0);
    }
    t->left = t->right = NULL;
}

btree * strict_binary_input(btree *p, int val){
    btree *temp1, *temp2;
    if(!p){
        p=create_memory();
        (p)->data=val;
    }
    else{
        temp1=p;
        while(temp1){
            temp2=temp1;
            if(temp1->data > val)
                temp1=temp1->left;
            else
                temp1=temp1->right;
        }
        if(temp2->data>val){
            temp2->left=create_memory();
            temp2=temp2->left;
            temp2->data=val;
        }
        else{
            temp2->right=create_memory();
            temp2=temp2->right;
            temp2->data=val;
        }
    }
    return p;
}


int levels(btree *root){
    if(root==NULL)
        return 0;
    int l_height=levels(root->left);
    int r_height=levels(root->right);
    return max(l_height,r_height)+1;
}

void printlevel(btree *root, int l){
    if(root==NULL){
        printf("#  ");
        return;
    }
    if(l==1)
        printf("%d  ",root->data);
    else if(l>1){
        printlevel(root->left,l-1);
        printlevel(root->right,l-1);
    }
}

void display(btree *root){
    if(!root){
        fprintf(stderr, "Empty tree!!\n");
        return ;
    }
    int h=levels(root);
    int i;
    for(i=1;i<=h;i++){
        for(int j=i;j<=h;j++)
            printf("  ");
        printlevel(root,i);
        printf("\n\n");
    }
}

btree *search(btree *p, int key){
/* only happens where the data is arranged in left < root < right */
    btree *temp=p;
    while(temp!=NULL){
        if(temp->data==key)
            return temp;
        else if(temp->data > key)
            temp = temp->left;
        else
            temp = temp->right;
    }
    return NULL;
}

void delete(btree *p){
    btree *templ,*tempr;
    if(p!=NULL){
        templ=p->left;
        tempr=p->right;
        free(p);
        delete(templ);
        delete(tempr);
    }
}


int main(){
    system("clear");
    printf("welcome to the bianry tree\n");
    btree *root=NULL;
    fprintf(stdout, "Enter -999 to STOP the input process!!\n");
    int c;
    while(1){
        fscanf(stdin, "%d", &c);
        if(c == -999)
            break;
        root=strict_binary_input(root,c);
    }
    display(root);

    int find;
    printf("enter the value to be searched\n");
    scanf("%d",&find);
    btree *s = search(root,find);
    if(!s)
        printf("NOT FOUND\n");
    else
        printf("FOUND: %d\n",s->data);
    delete(root);
}