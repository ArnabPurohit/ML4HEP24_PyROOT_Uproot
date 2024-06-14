# include "analysis.hxx"
float optimized_largest_sum(float* v1, float* v2, std::size_t size){
  float r = -999.f;
  for(size_t i1 = 0; i1 < size; i1++){
    for(size_t i2 = 0; i2 < size; i2++){
      float tmp = v1[i1] + v2[i2];
      if(tmp > r) r = tmp;
    }
  }
  return r;
}
