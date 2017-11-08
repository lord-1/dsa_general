
Node* deleteNode(Node *head,int x)
{
    //Your code here
    int i = 1;
    Node *temp = head;
    Node *prev = head;
    if (x == 1)
        head = head->next;
    else
    {
        while (temp->next != NULL && x != i)
        {   prev = temp;
            temp = temp->next;
            i = i + 1;
        }
        if (temp->next != NULL)
        {
           prev->next = temp->next;
           free(temp);
        }
        else
            prev->next = NULL;
    }
    return head;
    
}

