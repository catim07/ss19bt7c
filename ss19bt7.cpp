#include<stdio.h>
#include<string.h>
struct student{
	int id;
	char name[20];
	int age;
	char phoneNumber[20];
};
void deleStudent(struct student sinhvien[],int checkId,int *size){
	int check=1;
	for(int i=0;i<*size;i++){
		if(checkId==sinhvien[i].id){
			for(int j=i;j<*size-1;j++){
				sinhvien[j].id=sinhvien[j+1].id;
				strcpy(sinhvien[j].name,sinhvien[j+1].name);
				sinhvien[j].age=sinhvien[j+1].age;
				strcpy(sinhvien[j].phoneNumber,sinhvien[j+1].phoneNumber);
			}
			check=0;
		}
	}
	if(check){
		printf("khong co id: %d nay trong bo nho",checkId);
	}else{
	for(int i=0;i<*size;i++){
		printf("id: %d\n",sinhvien[i].id);
		printf("ten: %s\n",sinhvien[i].name);
		printf("tuoi: %d\n",sinhvien[i].age);
		printf("so dien thoai: %s\n",sinhvien[i].phoneNumber);
		printf("-----------------------");
	}
}
}
int main(){
	int deleId,size=5;
	struct student sinhvien[5]={
		{1,"cuong le",18,"0508070601"},
		{2,"con ga",18,"0608070602"},
		{3,"con heo",18,"0708070603"},
		{4,"con bo",18,"0808070604"},
		{5,"ham lao",18,"0208070605"},
	};
	printf("moi ban nhap so id: ");
	scanf("%d",&deleId);
	deleStudent(sinhvien,deleId,&size);
}
