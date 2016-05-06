#include <omp.h>

double trapz_serial(double* fvals, double* x, int N)
{
  return 0.0;
}


double trapz_parallel(double* fvals, double* x, int N, int num_threads)
{
  return 0.0;
}


double time_trapz_parallel(double* fvals, double* x, int N, int num_threads)
{
  double end, start = omp_get_wtime();
  trapz_parallel(fvals, x, N, num_threads);
  end = omp_get_wtime();
  return (end - start);
}


double simps_serial(double* fvals, double* x, int N)
{
  return 0.0;
}


double simps_parallel(double* fvals, double* x, int N, int num_threads)
{
  return 0.0;
}


double time_simps_parallel(double* fvals, double* x, int N, int num_threads,
                           int repeat)
{
  double end, start = omp_get_wtime();
  for (int i=0; i<repeat; ++i)
    simps_parallel(fvals, x, N, num_threads);
  end = omp_get_wtime();
  return (end - start) / (double)repeat;
}


double simps_parallel_chunked(double* fvals, double* x, int N,
                              int num_threads, int chunk_size)
{
  return 0.0;;
}


double time_simps_parallel_chunked(double* fvals, double* x, int N,
                                   int num_threads, int chunk_size,
                                   int repeat)
{
  double end, start = omp_get_wtime();
  for (int i=0; i<repeat; ++i)
    simps_parallel_chunked(fvals, x, N, num_threads, chunk_size);
  end = omp_get_wtime();
  return (end - start) / (double)repeat;
}
