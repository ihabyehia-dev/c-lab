#ifndef SDDS_DMA_H
#define SDDS_DMA_H

struct Samples {
    char* m_title;
    int* m_data;
    int m_size;
};

Samples* CreateSamples(const char* title);
void add(Samples& S, const int data[], int size);
void append(int*& data, int size, const int appendedData[], int dataSize);
void freemem(Samples*& s);

#endif
