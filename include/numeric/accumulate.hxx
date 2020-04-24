// accumulate.hxx

#ifndef ACCUMULATE_HXX
#define ACCUMULATE_HXX

#include <utility> // for std::move


namespace cmb {


  // 3 parameter overload
  template <class I, // I models InputIterator
            class T> // T models Arithmetic
  constexpr inline T
  accumulate(I first, I last, T init)
  {
    for (; first != last; ++first)
      init = std::move(init) + *first;

    return init;
  }

  
  // 4 parameter overload
  template <class I, // I models InputIterator
            class T, // T models Arithmetic
            class B> // B models BinaryOperation
  constexpr inline T
  accumulate(I first, I last, T init, B binary_op)
  {
    for (; first != last; ++first)
      init = binary_op( std::move(init), *first );

    return init;
  }


} // namespace cmb


#endif