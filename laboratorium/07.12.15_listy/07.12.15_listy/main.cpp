#include <iostream>
struct ListElem
{
	int val;
	ListElem* next;
};

void AddFront(ListElem*&nowy, int val)
{
	nowy = new ListElem{ val, nowy };
}

void wyswietlanie_tyl(ListElem*&head)
{
	if (head)
	{
		wyswietlanie_tyl(head->next);
		std::cout << head->val << " ";
	}
}

void AddEnd(ListElem*&head,int x)
{
	if (head)
	while (head->next)
		head = head->next;
	head->next = new ListElem{ x, nullptr };
}



int main()
{
	ListElem* head = nullptr;

	/*head = new ListElem{ 5, nullptr };
	head->next = new ListElem{ 6,nullptr };*/

	AddFront(head, 5 );
	AddEnd(head, 4);
	AddEnd(head, 11);

	//for (int i = 0;i <= 1500;i++)
	//	AddEnd(head, i);

	//wyswietlanie_tyl(head);

	auto tmp = head;
	while (tmp != nullptr)
	{
		std::cout << tmp->val;
		tmp = tmp->next;
	}
	
		
	auto tmp1 = head;
	while (head)
	{
		tmp1 = head;
		head=head->next;
		delete head;
		
	}

}

// Funkcje wyswietlania i usuwania 