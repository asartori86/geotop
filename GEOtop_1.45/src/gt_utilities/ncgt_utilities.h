
/* TO DO
 * \author Emanuele Cordano
 */

#ifdef USE_NETCDF_ONGOING

char *copy_stringnames(const char *);

int rotate180_y_doublematrix(DOUBLEMATRIX *);
int rotate180_y_doubletensor(DOUBLETENSOR *);
int rotate180_y_floatmatrix(FLOATMATRIX *);



int rotate180_y_longmatrix(LONGMATRIX *);
int rotate180_y_intmatrix(INTMATRIX *);
int rotate180_y_shortmatrix(SHORTMATRIX *);

int invert_order_doublevector(DOUBLEVECTOR *);
int invert_order_longvector(LONGVECTOR *);

#endif