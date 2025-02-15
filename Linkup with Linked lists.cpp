 Node* removeDuplicates(Node *head)
          {
            //Write your code here
              if(head == nullptr){
                  return head;
              }
              
              Node *currentNode = head, *lastNode = head;
              int lastVal = head->data;
              for(;;){
                  currentNode = currentNode->next;
                  if(currentNode == nullptr){
                      break;
                  }
                  
                  int currentVal = currentNode->data;
                  if(currentVal == lastVal){
                      lastNode->next = currentNode->next;
                      currentNode = lastNode;
                  } else {
                    lastVal = currentVal;
                    lastNode = currentNode;
                  }
              }             
              return head;              
          }
