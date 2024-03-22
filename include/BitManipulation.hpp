namespace BitManipulation {
constexpr bool IsSubmask(int64_t mask, int64_t submask) {
  return (submask & mask) == submask;
}
constexpr int64_t GetMaskByBitIndex(int vertex) { return 1llu << vertex; }
constexpr int64_t BitExtract(int64_t mask, int i) {
  return mask ^ GetMaskByBitIndex(i);
}
constexpr int64_t UnitCount(int64_t mask) {
  mask = (mask & 0x55555555u) + ((mask >> 1) & 0x55555555u);
  mask = (mask & 0x33333333u) + ((mask >> 2) & 0x33333333u);
  mask = (mask & 0x0f0f0f0fu) + ((mask >> 4) & 0x0f0f0f0fu);
  return mask;
}
}  // namespace BitManipulation
