#include <stdio.h>
#include <stdlib.h>
struct std{
    int id;
    char name[10];
    char *add;
};
void accept(struct std*s);
void disp(struct std*s);
int main(){
    struct std s;
    accept(&s);
    disp(&s);
  return 0;
}
void accept(struct std*s){
    scanf("%d%s%s",&s->id,s->name,s->add);
}
void disp(struct std*s){
    printf("%d + %s + %s",s->id,s->name,s->add);
}