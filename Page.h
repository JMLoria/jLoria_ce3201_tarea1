#ifndef CE2103_TAREA1_JOSEMANUELLORIA_PAGE_H
#define CE2103_TAREA1_JOSEMANUELLORIA_PAGE_H


class Page {
private:
    bool isLoaded;
    int numPage;

    int array[128];

public:
    Page();
    Page(int a[], int pageNum);
    int operator [](int index);
    bool getLoaded() const;
    int getNumPage() const;

};


#endif //CE2103_TAREA1_JOSEMANUELLORIA_PAGE_H