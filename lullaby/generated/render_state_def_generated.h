// Autogenerated code.  Do not edit.
#ifndef LULLABY_RENDER_STATE_DEF_GENERATED_H_
#define LULLABY_RENDER_STATE_DEF_GENERATED_H_

#include <type_traits>
#include <memory>
#include "flatbuffers/render_state_def_generated.h"
#include "lullaby/util/color.h"
#include "lullaby/util/common_types.h"
#include "lullaby/util/math.h"
#include "lullaby/util/optional.h"
#include "lullaby/util/typeid.h"
#include "common_generated.h"

namespace lull {
class AlphaTestStateT;
class BlendStateT;
class CullStateT;
class DepthStateT;
class StencilFunctionT;
class StencilOperationT;
class StencilStateT;
class ScissorStateT;
class RenderStateT;
class AlphaTestStateT {
 public:
  using FlatBufferType = AlphaTestState;

  AlphaTestStateT() {}

  bool enabled = 0;
  lull::RenderFunction function = lull::RenderFunction_Always;
  float ref = 0.0f;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class BlendStateT {
 public:
  using FlatBufferType = BlendState;

  BlendStateT() {}

  bool enabled = 0;
  lull::BlendFactor src_alpha = lull::BlendFactor_One;
  lull::BlendFactor src_color = lull::BlendFactor_One;
  lull::BlendFactor dst_alpha = lull::BlendFactor_Zero;
  lull::BlendFactor dst_color = lull::BlendFactor_Zero;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class CullStateT {
 public:
  using FlatBufferType = CullState;

  CullStateT() {}

  lull::CullFace face = lull::CullFace_Back;
  bool enabled = 0;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class DepthStateT {
 public:
  using FlatBufferType = DepthState;

  DepthStateT() {}

  lull::RenderFunction function = lull::RenderFunction_Always;
  bool test_enabled = 0;
  bool write_enabled = 1;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class StencilFunctionT {
 public:
  using FlatBufferType = StencilFunction;

  StencilFunctionT() {}

  lull::RenderFunction function = lull::RenderFunction_Always;
  int32_t ref = 0;
  uint32_t mask = 1;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class StencilOperationT {
 public:
  using FlatBufferType = StencilOperation;

  StencilOperationT() {}

  lull::StencilAction stencil_fail = lull::StencilAction_Keep;
  lull::StencilAction depth_fail = lull::StencilAction_Keep;
  lull::StencilAction pass = lull::StencilAction_Keep;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class StencilStateT {
 public:
  using FlatBufferType = StencilState;

  StencilStateT() {}

  bool enabled = 0;
  lull::StencilFunctionT back_function;
  lull::StencilOperationT back_op;
  lull::StencilFunctionT front_function;
  lull::StencilOperationT front_op;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class ScissorStateT {
 public:
  using FlatBufferType = ScissorState;

  ScissorStateT() {}

  bool enabled = 0;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class RenderStateT {
 public:
  using FlatBufferType = RenderState;

  RenderStateT() {}

  lull::Optional<lull::AlphaTestStateT> alpha_test_state;
  lull::Optional<lull::BlendStateT> blend_state;
  lull::Optional<lull::CullStateT> cull_state;
  lull::Optional<lull::DepthStateT> depth_state;
  lull::Optional<lull::ScissorStateT> scissor_state;
  lull::Optional<lull::StencilStateT> stencil_state;
  lull::Optional<mathfu::rectf> viewport;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

template <typename Archive>
void AlphaTestStateT::SerializeFlatbuffer(Archive archive) {
  archive.Scalar(&enabled, 4, 0);
  uint16_t _function = static_cast<uint16_t>(function);
  archive.Scalar(&_function, 6, lull::RenderFunction_Always);
  function = static_cast<lull::RenderFunction>(_function);
  archive.Scalar(&ref, 8, 0.0f);
}

template <typename Archive>
void BlendStateT::SerializeFlatbuffer(Archive archive) {
  archive.Scalar(&enabled, 4, 0);
  uint16_t _src_alpha = static_cast<uint16_t>(src_alpha);
  archive.Scalar(&_src_alpha, 6, lull::BlendFactor_One);
  src_alpha = static_cast<lull::BlendFactor>(_src_alpha);
  uint16_t _src_color = static_cast<uint16_t>(src_color);
  archive.Scalar(&_src_color, 8, lull::BlendFactor_One);
  src_color = static_cast<lull::BlendFactor>(_src_color);
  uint16_t _dst_alpha = static_cast<uint16_t>(dst_alpha);
  archive.Scalar(&_dst_alpha, 10, lull::BlendFactor_Zero);
  dst_alpha = static_cast<lull::BlendFactor>(_dst_alpha);
  uint16_t _dst_color = static_cast<uint16_t>(dst_color);
  archive.Scalar(&_dst_color, 12, lull::BlendFactor_Zero);
  dst_color = static_cast<lull::BlendFactor>(_dst_color);
}

template <typename Archive>
void CullStateT::SerializeFlatbuffer(Archive archive) {
  uint16_t _face = static_cast<uint16_t>(face);
  archive.Scalar(&_face, 4, lull::CullFace_Back);
  face = static_cast<lull::CullFace>(_face);
  archive.Scalar(&enabled, 6, 0);
}

template <typename Archive>
void DepthStateT::SerializeFlatbuffer(Archive archive) {
  uint16_t _function = static_cast<uint16_t>(function);
  archive.Scalar(&_function, 4, lull::RenderFunction_Always);
  function = static_cast<lull::RenderFunction>(_function);
  archive.Scalar(&test_enabled, 6, 0);
  archive.Scalar(&write_enabled, 8, 1);
}

template <typename Archive>
void StencilFunctionT::SerializeFlatbuffer(Archive archive) {
  uint16_t _function = static_cast<uint16_t>(function);
  archive.Scalar(&_function, 4, lull::RenderFunction_Always);
  function = static_cast<lull::RenderFunction>(_function);
  archive.Scalar(&ref, 6, 0);
  archive.Scalar(&mask, 8, 1);
}

template <typename Archive>
void StencilOperationT::SerializeFlatbuffer(Archive archive) {
  uint16_t _stencil_fail = static_cast<uint16_t>(stencil_fail);
  archive.Scalar(&_stencil_fail, 4, lull::StencilAction_Keep);
  stencil_fail = static_cast<lull::StencilAction>(_stencil_fail);
  uint16_t _depth_fail = static_cast<uint16_t>(depth_fail);
  archive.Scalar(&_depth_fail, 6, lull::StencilAction_Keep);
  depth_fail = static_cast<lull::StencilAction>(_depth_fail);
  uint16_t _pass = static_cast<uint16_t>(pass);
  archive.Scalar(&_pass, 8, lull::StencilAction_Keep);
  pass = static_cast<lull::StencilAction>(_pass);
}

template <typename Archive>
void StencilStateT::SerializeFlatbuffer(Archive archive) {
  archive.Table(&back_function, 6);
  archive.Table(&back_op, 8);
  archive.Table(&front_function, 10);
  archive.Table(&front_op, 12);
  archive.Scalar(&enabled, 4, 0);
}

template <typename Archive>
void ScissorStateT::SerializeFlatbuffer(Archive archive) {
  archive.Scalar(&enabled, 4, 0);
}

template <typename Archive>
void RenderStateT::SerializeFlatbuffer(Archive archive) {
  archive.Table(&alpha_test_state, 4);
  archive.Table(&blend_state, 6);
  archive.Table(&cull_state, 8);
  archive.Table(&depth_state, 10);
  archive.Table(&scissor_state, 12);
  archive.Table(&stencil_state, 14);
  archive.NativeStruct(&viewport, 16);
}

}  // namespace lull

LULLABY_SETUP_TYPEID(lull::AlphaTestStateT);
LULLABY_SETUP_TYPEID(lull::BlendStateT);
LULLABY_SETUP_TYPEID(lull::CullStateT);
LULLABY_SETUP_TYPEID(lull::DepthStateT);
LULLABY_SETUP_TYPEID(lull::StencilFunctionT);
LULLABY_SETUP_TYPEID(lull::StencilOperationT);
LULLABY_SETUP_TYPEID(lull::StencilStateT);
LULLABY_SETUP_TYPEID(lull::ScissorStateT);
LULLABY_SETUP_TYPEID(lull::RenderStateT);

#endif  // LULLABY_RENDER_STATE_DEF_GENERATED_H_
