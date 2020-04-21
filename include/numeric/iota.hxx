// iota.hxx

#ifndef IOTA_HXX
#define IOTA_HXX


namespace cmb {


  template <class I, // I models ForwardIterator
            class T> // T is value_type<I>
  constexpr inline void
  iota(I first, I last, T value)
  {
    for (; first != last; ++first, ++value)
      *first = value;
  }


} // namespace cmb


#endif