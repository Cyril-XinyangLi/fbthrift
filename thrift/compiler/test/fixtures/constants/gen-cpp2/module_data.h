/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::cpp2::EmptyEnum> {
  using type = ::cpp2::EmptyEnum;
  static constexpr const std::size_t size = 0;
  static constexpr const std::array<type, 0> values = {{
  }};
  static constexpr const std::array<folly::StringPiece, 0> names = {{
  }};
};
template <> struct TEnumDataStorage<::cpp2::City> {
  using type = ::cpp2::City;
  static constexpr const std::size_t size = 4;
  static constexpr const std::array<type, 4> values = {{
    type::NYC,
    type::MPK,
    type::SEA,
    type::LON,
  }};
  static constexpr const std::array<folly::StringPiece, 4> names = {{
    "NYC",
    "MPK",
    "SEA",
    "LON",
  }};
};
template <> struct TEnumDataStorage<::cpp2::Company> {
  using type = ::cpp2::Company;
  static constexpr const std::size_t size = 4;
  static constexpr const std::array<type, 4> values = {{
    type::FACEBOOK,
    type::WHATSAPP,
    type::OCULUS,
    type::INSTAGRAM,
  }};
  static constexpr const std::array<folly::StringPiece, 4> names = {{
    "FACEBOOK",
    "WHATSAPP",
    "OCULUS",
    "INSTAGRAM",
  }};
};

}} // apache::thrift
