#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "print_tree.h"


TreeUnit *newTreeUnit(int parentNum, const char *label, const char *edgeLabel)
{
    if(label!=NULL && edgeLabel!=NULL && parentNum>=0)
    {
        TreeUnit *unit = (TreeUnit *)malloc(sizeof(TreeUnit));
        unit->label = (char *)malloc( sizeof(char)*(strlen(label)+1) );
        strcpy(unit->label,label);
		unit->edgeLabel = (char *)malloc( sizeof(char)*(strlen(edgeLabel)+1) );
        strcpy(unit->edgeLabel,edgeLabel);
        unit->parentNum = parentNum;
		unit->next = NULL;
        return unit;
    }
    return NULL;
}

void addTreeUnit(Tree *tree, TreeUnit *element)
{
    if(tree!=NULL && element!=NULL)
    {
        if(tree->begin==NULL)
        {
            tree->begin = element;
            tree->end = element;
            element->num = 1;
        }
        else
        {
            tree->end->next = element;
            element->num = tree->end->num+1;
            tree->end = element;
        }
    }
}



void print_node(int nodeNum, char *nodeName)
{
    printf("%d  [label=\"%s\"];\n",nodeNum,nodeName);
}

void print_edge(int numNode1, int numNode2, char* name)
{
    printf("%d->%d[label=\"%s\"];\n",numNode1,numNode2,name);
}

void printTree(ProgramList *pr)
{
    if(pr!=NULL)
    {
        Tree *tree = (Tree *)malloc(sizeof(Tree));
        tree->begin = NULL;
        tree->end = NULL;

		addTreeUnit(tree, newTreeUnit(0,"Program", ""));
		int rootNode = tree->end->num;


		programParse(pr, tree, rootNode);
        // programBlockParse(pr->end, tree, rootNode);

		printf("digraph Program {\n");

			TreeUnit *i_units = tree->begin;
			while(i_units!=NULL)
			{
				print_node(i_units->num,i_units->label);
				i_units = i_units->next;
			}
			printf("\n");
			TreeUnit *i_parent = tree->begin;
			while(i_parent!=NULL)
			{
				TreeUnit *i_child = tree->begin;
				while(i_child!=NULL)
				{
					if(i_parent->num==i_child->parentNum)
					{
						print_edge(i_parent->num, i_child->num,i_child->edgeLabel);
					}

					i_child = i_child->next;
				}
				i_parent = i_parent->next;
			}

		printf("\n}");
    }
}

//ToDO: Дописать



