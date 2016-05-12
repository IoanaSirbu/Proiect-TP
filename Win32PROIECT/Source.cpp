#define _CRT_SECURE_NO_WARNINGS
#define nmax 100

#include<Windows.h>
#include<stdlib.h>

typedef struct nods{
	int a;
	struct nods *next;
};

typedef struct nodd{
	int a;
	struct nodd *left, *right;
};

nods* prims = NULL;
nods* ultims = NULL;

nodd* primd=NULL;
nodd* ultimd=NULL;

void inserare_s(int x)  
{
	nods* b;
	b = (nods*)malloc(sizeof(nods));
	b->a = x;
	b->next = NULL;
	if (prims == 0) {
		prims = b;
		ultims = b;
	}
	else {
		ultims->next = b;
		ultims = b;
	}
}


void inserare_d(int a)
{
	nodd *p = (nodd*)malloc(sizeof(nodd));
	p->a = a;
	p->left = NULL;
	p->right = NULL;
	if (primd == NULL)
	{
		primd = p;
		ultimd = p;
	}

	else{
		ultimd->right = p;
		p->left = ultimd;
		ultimd = p;
	}
}

void bubble_sort_vector(int n, float a[nmax])
{
	int i, j, ok;
	float x;
	j = 0;
	do{
		ok = 1;
		j = j + 1;
		for (i = 0; i<n - j; i++)
		if (a[i]>a[i + 1]){
			ok = 0;
			x = a[i]; a[i] = a[i + 1]; a[i + 1] = x;
		};
	} while (ok == 0);
}



int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	return 0;
}