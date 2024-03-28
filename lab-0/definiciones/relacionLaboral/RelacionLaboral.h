#ifndef RELACIONLABORAL_H
#define RELACIONLABORAL_H

#include "../datatypes/dtypes.h"
#include "../empresa/Empresa.h"
#include "../empleado/Empleado.h"

class Empleado;
class Empresa;

class RelacionLaboral {

  public:
    // CONSTRUCTOR
    RelacionLaboral(Empresa*, Empleado*, float); // Empresa, Empleado, sueldo
    
    // SETTERS 
    void setSueldo(float);
    void setFechaDesvinculacion(Fecha);

    // GETTERS 
    float getSueldoLiquido(); // sueldo - descuento
    Fecha getFechaDesvinculacion();
    string getIdEmpresa();
    string getCiEmpleado();

  private:
    Empresa* empresa;
    Empleado* empleado;
    float sueldo;
    Fecha fechaDesvinculacion;
};


#endif