#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <winsock2.h>
#include <mysql/mysql.h>
#include <mysql/mysqld_error.h> 

using namespace std;

int main(int argc, char *argv[])
{
    
    MYSQL * _mysql;
     
    /* Intentar iniciar un objeto MySQL */
    if(!(_mysql = mysql_init(0))) 
    {
     cout << "Error al crear el objeto mysql" << endl;
    }
    else
    {
      cout << "Objeto mysql creado correctamente, conectando ..." << endl;
      /* Intentar conectar al servidor mysql */
      if(!mysql_real_connect(_mysql, "localhost", "root", "password", "testdb", 3306, NULL, 0))
      {
         cout << "No es posible conectar al servidor" << endl;                              
      }
      else
      {
        cout << "Conectado al servidor ..." << endl; 
        
        /* Ejecutar una consulta de selección en una tabla de la base de datos */
        
        const char * sql = "SELECT * FROM test";
        int query = mysql_query(_mysql, sql);
        
        /* Si ha ocurrido un error al realizar la consulta */
        /* Si la consulta es correcta regresa 0 */
        if (query != 0)
        {
          cout << "Ha ocurrido un error al realizar la consulta" << endl;      
        }
        else
        {
          cout << "Consulta correcta, extrayendo filas ..." << endl;
          /* Obteniendo el resultado de la consulta */  
          MYSQL_RES * resultado = mysql_store_result(_mysql);
          /* Obteniendo el número de filas afectadas */
          unsigned long filas_afectadas = mysql_num_rows(resultado);
          cout << "Filas afectadas: " << filas_afectadas << endl;
          /* Recorrer fila a fila */
          MYSQL_ROW fila;
          for (int x = 0; x < filas_afectadas; x++)
          {
              //Obtenemos la fila
              fila = mysql_fetch_row(resultado);
              //Mostrando el valor de los campos de la fila
              cout << fila[0] << fila[1] << fila[2] << endl;
          }
          // Liberar el resultado de la consulta
          mysql_free_result(resultado);
        } 
        
        /* Cerrar la conexión al servidor */
        mysql_close(_mysql); 
      }
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
