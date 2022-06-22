#include <stdio.h>
#include <stdlib.h>

void printSelect() {
	printf(" 1. rut tien \t");
	printf(" 2. chuyen khoan \n");
	printf(" 3. Xem so du \t");
	printf(" 4. thoat \t");
	printf("\n moi ban chon:");
	return;
}

void handleSelect(int gt, int sdu, int tien, int stk) {
    switch(gt) {
		case 1:
			printf("nhap so tien can rut:\n");
			fflush(stdin);
			scanf("%d",&tien);
			if (tien<=sdu)
			    printf("ban rut xong so tien: %d\n",tien);
			else
			    printf("vuot qua so du");
			break;
		case 2:
			printf("nhap so tai khoan can chuyen trong cung ngan hang:\n");
			fflush(stdin);
			scanf("%d",&stk);
			printf("\t nhap so tien muon chuyen: \n");
			fflush(stdin);
			scanf("%d",&tien);
			if(tien<=sdu) {
			    printf("\t Ban da chuyen xong so tien:%d cho stk:%d",tien,stk);
			    sdu=sdu-tien;
			    printf("\t So du tai khoan: %d \n",sdu);
			} else
			    printf("vuot qua so du");
			break;
		case 3:
		    printf("so du qua nhieu khong hien thi duoc het :))  : %d",sdu);
			break;
		case 4:
			break;
    }
    return;
}

int main(int argc, char *argv[]) {
	int id, mk, id1, mk1, tien, stk, gt, sdu;
	char lap;
	id1= 123;
	mk1= 456;
	sdu= 10000000;
	printf("Chao mung ban, moi ban nhap the : \n");
	scanf("%d", &id);
	printf("Moi ban nhap mat khau : \n");
	scanf("%d", &mk);
	
	if( id==id1 && mk==mk1) {
	    printf("------------------------------");
		printf("\tda dang nhap thanh cong\n\n");
		do {		
    	    printSelect();
    	    
    		fflush(stdin);
			scanf("%d",&gt);
			
			handleSelect(gt, sdu, tien, stk);
			
    		printf("chon y de tiep tuc:\n");
    		fflush(stdin); 
    		scanf("%c", &lap);
	    } while(lap=='y');
	} else {
		printf("sai mk, moi ban nhap lai\n");
	}
	return 0;
}
