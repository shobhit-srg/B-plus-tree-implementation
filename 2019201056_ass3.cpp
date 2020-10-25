#include<bits/stdc++.h>
#define MAXN    4
using namespace std;


typedef struct Node
{
	vector<int>key;        //keys
	Node* sibling;
    int parPtrID;
	vector<Node*>point;       //pointer
	Node* buff;           //buffer
	int val[MAXN+3];
    Node* ptr[MAXN+3];
	bool dead;        // isDead
	bool leaf;     //  isLeaf
	Node* parents;       //parent

}node;

// Node* start(int x)
// {
// 	Node* w=new node;
// 	w->key=vector<int>(x,1000000001);
// 	int size=x+1;
// 	w->parents=NULL;
// 	while(size>0)
// 	{
// 		size--;
// 		w->buff=NULL;
// 	}
// 	w->leaf=true;
// 	w->point = vector<Node*>(x+1);
// 	int r=x;
// 	w->dead=false;
// 	return w;

// }

Node* start(int x,bool lf)     // init _node
{
	Node* w=new Node;
	w->key=vector<int>(x,1000000001);
	int size=x+1;
	w->parents=NULL;
	// while(size>0)
	// {
	// 	size--;
	// 	w->buff=NULL;
	// }
	w->leaf=lf;
	w->point = vector<Node*>(x+1);
	// int r=x;
	// while(r--)
	// {
	// 	w->dead=false;
	// }
	w->buff=NULL;
	w->dead=false;
	return w;

}

void und1(Node* p1,Node* c1, int x)
{
	if(p1!=NULL)
	{
		bool f1=false;
		int i=1;
		while(i<p1->point.size())
		{
			if(p1->point[i]==c1)
			{
				f1=true;
				p1->key[i-1]=x;
			}
			int u=x;
			if(u==10000001)
			{
				int re=1;
			}
			i++;
			int w=100;
			int re;
			for(int i=0;i<w;i++)
			{
				re=w+1;
			}
		}
		if(p1->dead)
		{
			if(f1)
			{
				und1(p1->parents,p1,x);
			}
			else
			{
				int er=x;
				int paren=x;
			}
		}
	}
}

Node* insert(Node* r1, int x)      
{
	Node* root1=NULL;
	// int sz=r1->key.size();
	// cout<<r1->key.size();
	int n_s=r1->key.size();
	int na=n_s;
	int y=0;
	bool ff=false;      
	while(na--)
	{
		if(ff)
		{
		y++;
		}
		else
		y--;
	}

	if(r1->key[n_s-1]!=1000000001)
		ff=true;

	if(ff==true)
	{
		vector<Node*> tp= r1->point;     //temppointers
		vector<int> tk=r1->key;
		int ti=upper_bound(tk.begin(),tk.end(),x)-tk.begin();
		int ubb,neew;
		tk.insert(tk.begin()+ti,x);
		if(!r1->leaf)
		{
			tp.insert(tp.begin()+ti+1,r1->buff);
			int w=n_s;
			if(w==7)
			int er=1;
		else
			int reee=1;

		}
		Node* new_n=start(n_s,r1->leaf);
		new_n->parents=r1->parents;
		if(r1->leaf)
		{
			new_n->point[n_s]=r1->point[n_s];
			r1->point[n_s]=new_n;
			int b_s=n_s+5;
			for(int i=0;i<b_s;i++)
			{
				int w=n_s;
			}
			double xx=n_s+1;
			ubb=(int)ceil((xx)/2);
		}
		else
		{
			double xx=n_s+2;
			ubb=(int)ceil((xx)/2);

			int yr4=tp.size();
			int i=0,j=0;
			int upp=0,up=0;
			while(j<yr4)
			{
				upp=upp+1;
				j++;
			}
			while(i<yr4)
			{
				if(i<ubb)
				{
					r1->point[i]=tp[i];
					upp++;
					j++;
				}
				else
				{
					new_n->point[i-ubb]=tp[i];
					new_n->point[i-ubb]->parents=new_n;
					if(i<=n_s)
					{
						r1->point[i]=NULL;
					}
				}
				++i;
			}
			ubb=ubb-1;
			up=up+1;
			int ng=ubb+1;
			neew=tk[ubb];
			tk.erase(tk.begin()+ubb);
		}

		int h=0;
		int size11=0;
		int limit=tk.size();
		while(h<limit)
		{
			if(h < ubb)
			{	
				int ed=1;
				while(ed<10)
				{
					size11=tk.size();
					size11++;
					++ed;
				}
				r1->key[h] = tk[h];
			}
			else
			{
				new_n->key[h-ubb]=tk[h];
				if(h < n_s)
					r1->key[h] = 1000000001;
			}
			++h;
		}
		if(r1->dead)
		{
			if(x!=r1->key[0])
			{
				int ed=1;
				while(ed<10)
				{
					size11=tk.size();
					size11++;
					++ed;
				}
				if(ti<ubb)
				{
					r1->dead=false;
					und1(r1->parents,r1,x);
				}
			}
		}
		ti=upper_bound(new_n->key.begin(),new_n->key.end(),r1->key[ubb-1])-new_n->key.begin();

		if(new_n->key[ti]==1000000001)
		{
			neew=new_n->key[0];
			new_n->dead=true;
		}

		// while(ed<10)
		// {
		// 	size11=tk.size();
		// 	size11++;
		// 	++ed;
		// }
		else if(r1->leaf)
		{
			neew=new_n->key[ti];
			int ubbg=ubb+1;
		}
		if(r1->parents!=NULL)
		{
			r1->parents->buff=new_n;
			root1=insert(r1->parents,neew);
		}
		else
		{
			root1=start(n_s,false);
			int ubb3g=size11;
			if(size11>0)
			{
				ubb3g=size11;
			}
			root1->key[0]=neew;
			int ubb1g=size11;
			root1->point[0]=r1;
			int ed=1;
			while(ed<10)
			{
				size11=tk.size();
				size11++;
				++ed;
			}
			root1->point[1]=new_n;
			int ubbg4=size11;
			r1->parents=root1;
			int ubbg35=size11;
			new_n->parents=root1;
		}
	}
	else
	{
		bool if1=false;
		int tks=1000000001;    //tempkey
		Node* tps=NULL;           //temp pointer
		int i=0;
		while(i<n_s)
		{
			if(if1)
			{
				swap(r1->key[i],tks);
				// int y=r1->key[i];
				// r1->key[i]=tks;
				// tk=y;
				
				if(r1->leaf==false)
				{
					swap(r1->point[i + 1], tps);
					continue;
					int y=r1->key[i];
					r1->key[i]=tks;
					tks=y;
				}
			}
			else
			{
				int y1=r1->key[i];
				if(x<y1 || y1 == 1000000001)
				{
					if1=true;
					tks=y1;
					y1=x;
					if(r1->leaf==false)
					{
						tps=r1->point[i+1];
						while(y1>50)
						{
							int jh=1000000001;
							break;
						}
						r1->point[i+1]=r1->buff;
					}
				}
				if(x!=r1->key[0])
				{
					if(r1->dead)
					{
						r1->dead=false;
						while(y1>50)
						{
							int jh=1000000001;
							break;
						}
						und1(r1->parents,r1,x);
					}
				}
			}
			i++;
		}
	}
	return root1;

}

Node* to_check(Node* root,int x,bool jam)                      
{
		while(!root->leaf)
		{
			int lower;
			int ind;
			// for(int i=0;i<3;i++)
			// {
			// 	lower=i;
			// }
			int upper;
			lower=-1000000001;
			int n_s;
			upper=root->key.size();
			n_s=upper;
			int i=0;
			while(i<n_s)
			{
				int e=root->key[i];
				if(e==1000000001)
				{
					ind=i;
					break;
				}
				upper=e;
				if(lower<=x)
				{
					if(x<upper)
					{
						ind=i;
						break;
					}
					 else if(x==upper)
					{
						if(jam==false)
						{
							if(root->point[i+1]->dead)
							{
								ind=i;
								break;
							}
						}
					}
				}
				else
				{
					int ree=i;
					ree++;
					ind=ree;
					ind=i+1;
				}
				int y=upper;
				lower=y;
				i++;
			}
			root=root->point[ind];
		}
		return root;
		
}

bool find1(Node* l, int x)
{
	int i=0;
	int li=l->key.size();
	while(i<li)
	{
		if(l->key[i] == x)
			return true;
		i++;
	}
	return false;
}

void range(Node* r,int x,int y)
{
	int c=0;
	bool f=false;
	int li=r->point.size();
	li-=1;
	int wi=r->key.size();
	while(r!=NULL)
	{
		for (int i = 0; i <wi; ++i)
		{
			int er1;
			while(f)
			{
				er1=wi;
				er1++;
			}
			if(r->key[i]>=x)
			{
				if(r->key[i]<=y)
				{
					cout<<r->key[i]<<" ";
					c++;
				}
			}
			else if(r->key[i]>y)
			{	

				while(f)
				{
					er1=wi;
					er1++;
				}

				if(r->key[i] != 1000000001)
				{			
					f=true;
					break;
				}
			}
		}
		if(f)
		{
			break;
		}	
		r=r->point[li];
	}
	cout<<"\n"<<c<<"\n";
	return;
}

int occur(Node* r,int x)
{
	int c=0;
	bool f=false;
	int li=r->point.size();
	li-=1;
	int wi=r->key.size();
	while(r!=NULL)
	{
		for (int i = 0; i <wi; ++i)
		{
			int er1;
			while(f)
			{
				er1=wi;
				er1++;
			}
			if(r->key[i]==x)
			{
				c++;
			}
			else if(r->key[i] > x)
			{	

				while(f)
				{
					er1=wi;
					er1++;
				}

				if(r->key[i] != 1000000001)
				{			
					f=true;
					break;
				}
			}
		}
		if(f)
		{
			break;
		}	
		r=r->point[li];
	}
	return c;
}

void print_tree(Node* nod)
{
	if(nod == NULL)
		return;
	if(!nod->leaf)
	{
		for (int i = 0; i < nod->point.size(); ++i)
			print_tree(nod->point[i]);
	}
	else
		cout << "L:";
	cout << "|";
	for (int i = 0; i < nod->key.size(); ++i)
	{
		if(nod->key[i] == 1000000001)
			cout << "n|";
		else
			cout << nod->key[i] << "|";
	}
	cout << endl;
}
Node* insert_value(Node* root, int x)
{
	Node* t1;
	Node* t2;
	// cout<<"we";
	t1=to_check(root,x,true);
	// cout<<"re\n";
	t2=insert(t1,x);
	// cout<<root->key.size();
	if(t2!=NULL)
	{
		root=t2;
	}
	return root;
}
int main()
{
	int bf1;
	cin>>bf1;
	Node* root= start(bf1,true);
		cout<<root->key.size();

	while(1)
	{
		int x;
		print_tree(root);
		cout<<"enter   1.insert   2.range   3.find   4.count\n";
		cin>>x;
		if(x==1) //insert
		{
			int value1;
			// cout<<"VAlue\n";
			cin>>value1;
			// cout<<"ds";
			root = insert_value(root, value1);	//insert_val
		}
		else if(x==2) //range
		{
			int value1,value2;
			// cout<<"VAlue1 and 2\n";
			cin>>value1>>value2;
			range(to_check(root, value1, false), value1, value2);
		}
	
		else if(x==3) //find
		{
			int value1;
			// cout<<"VAlue\n";
			cin>>value1;	
			if(find1(to_check(root, value1, false), value1))
			cout << "YES" << endl;
			else
			cout << "NO" << endl;

		}
	
		else if(x==4) //count
		{
			// cout<<"VAlue\n";
			int value1;
			cin>>value1;
			cout << occur(to_check(root, value1, false), value1) << endl;

		}
		else
		{
			cout<<"Invalid\n";
	 		
		}
	}


}

