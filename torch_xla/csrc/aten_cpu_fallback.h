#pragma once

#include <ATen/native/cpu_fallback.h>

namespace torch_xla {

void xla_cpu_fallback(const c10::OperatorHandle& op, torch::jit::Stack* stack);

} // namespace torch_xla
