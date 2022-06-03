#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Item{
	private:
		string itemName[20];
		string itemCategory[20];
		int itemNumber[20];
		int itemQuantity[20];
		float itemPrice[20];
		int z; //z index
	
	public:
		void ItemAdd(){
			system("cls");
			cout << "Please enter the item name: ";
			cin >> itemName[z];
			
			cout << "Please enter the category name: ";
			cin >> itemCategory[z];
			
			
			cout << "Plase enter the item number: ";
			cin >> itemNumber[z];
			
			cout << "Please enter the price of item: ";
			cin >> itemPrice[z];
			
			cout << "Please enter the item Quantity: ";
			cin >> itemQuantity[z];
			
			z++; //index artt�r�lmal� ki 2.urune ge�elim.
		}	
		
		void ItemDelete(){
			int i,j;
			system("cls");
			
			cout << "Please enter the item number: ";
			cin >> i;
			
			for(int j=0; j<z; j++){
											//item numaras�n� i ye atad�k. daha sonra for d�ng�s�nde j yi 0 dan ba�latarak z numaras�na g�re k�yaslad�k e�er item numaras�n�n j.indeksi == i olursa t�m class �zelliklerinin j.eleman�n� 0 yapar�z.
				if(itemNumber[j] == i){
					itemPrice[j] = 0;
					itemName[j] = "";
					itemCategory[j] = "";
					itemNumber[j] = 0;
					itemQuantity[j] = 0;
					cout<<"\nThe item is deleted from the list.";
			        
					
			        break;
				}
				
			}
		}
		
		void ItemDecrease(){
			int a,i,j; //decrease
			system("cls");
			
			cout << "Please enter the item number: ";
			cin >> i;
			
			cout << "Please enter the item you want to decrease: ";
			cin >>a;
			
			for(int j=0; j<z; j++ ){
				
				if(itemNumber[j] == i){
					itemQuantity[j] -= a;
			        break;
				}
			}
			
		}
		
		void ItemIncrease(){
			int a,i,j; //increase
			system("cls");
			
			cout << "Please enter the item number: ";
			cin >> i;
			
			cout << "Please enter the item you want to increase: ";
			cin >>a;
			
			for(int j=0; j<z; j++ ){
				
				if(itemNumber[j] == i){
					itemQuantity[j] += a;
			        break;
				}
			}
			
		}
		
		void ItemDisplay(){
			int i,j = 1;
			system("cls");
			
			for(int i=0; i<z; i++){
				
				cout << j <<". Category Name: " << itemCategory[i]<< endl;
				cout << j <<". item Name: " << itemName[i]<< endl;
				cout << j <<". item Number: " << itemNumber[i]<< endl;
				cout << j <<". item Quantity: " << itemQuantity[i]<< endl;
				cout << j <<". item Price: " << itemPrice[i] << endl;
				cout << "---------------------------------------------" << endl;
				j++;
				
			}
		}
		
	};
	
	int main(){
	
		int i;
		Item item1;
		system("cls");
		
		while(1){
			  cout<<"\n   What do you want to do?"<<endl;
		      cout<<"\n1: Add a new item.";
		      cout<<"\n2: Delete an item.";
		      cout<<"\n3: Decrease an item.";
		      cout<<"\n4: Increase an item.";
		      cout<<"\n5: Display all items.";
		      cout<<"\n6: Exit"<<endl;
		      cout<<"\n\n Choose a number:";
		      cin>>i;
		
		
		switch(i)
      {
        case 1:
        {
          item1.ItemAdd();
          break;
        }
        case 2:
        {
          item1.ItemDelete();
          break;
        }
        case 3:
        {
          item1.ItemDecrease();
          break;
        }
        case 4:
		{
          item1.ItemIncrease();
		  break;
		}
        case 5:
        {
          item1.ItemDisplay();
          break;
        }

          default:
        {
          cout<<"Good Bye! Thank you.";
          exit(1);
        }
      }
    }
    
	return 0;
}

