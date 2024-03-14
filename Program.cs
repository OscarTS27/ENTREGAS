using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            
            DateTime fechaActual = DateTime.Now;
            string nombreMes = ObtenerNombreMes(fechaActual.Month);
            int diasEnMes = ObtenerDiasEnMes(nombreMes);

            int i;
            float[] vector = new float[diasEnMes]; ;
            string nombre;
          

            Console.WriteLine(nombreMes);
            Console.Write("Ingrese nombre: ");
            nombre = Console.ReadLine();

            for ( i = 0; i < diasEnMes; i++)
            {
                Console.Write($"{i + 1}. Ingrese ventas: ");
                vector[i] = Convert.ToSingle(Console.ReadLine());
            }

            float suma = 0;

            for ( i = 0; i < diasEnMes; i++)
            {
                suma += vector[i];
            }

            Console.WriteLine($"La suma de las ventas es: {suma}");
            Console.WriteLine($"Promedio de ventas: {suma/diasEnMes}");










            Console.ReadKey();
        }

       
        static string ObtenerNombreMes(int numeroMes)
        {
            return new DateTime(2022, numeroMes, 1).ToString("MMMM");
        }

     

        
        static int ObtenerDiasEnMes(string nombreMes)
        {
            switch (nombreMes.ToLower())
            {
                case "enero":
                case "marzo":
                case "mayo":
                case "julio":
                case "agosto":
                case "octubre":
                case "diciembre":
                    return 31;
                case "abril":
                case "junio":
                case "septiembre":
                case "noviembre":
                    return 30;
                case "febrero":
                    
                    return 28;
                default:
                    return -1; 
            }
        }


    }
}
