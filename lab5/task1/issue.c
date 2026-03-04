#include "library.h"
#include <stdio.h>

void issueBook() {
  int id;
  printf("Enter Book ID to issue: ");
  scanf("%d", &id);

  for (int i = 0; i < bookCount; i++) {
    if (library[i].id == id) {
      if (library[i].isIssued) {
        printf("Book Already Issued!\n");
      } else {
        library[i].isIssued = 1;
        printf("Book Issued to %d!\n", i);
      }

      return;
    }
  }

  printf("Book Not Found!\n");
}
