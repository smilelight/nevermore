#include "tiny_dnn/tiny_dnn.h"

using namespace tiny_dnn;

void classification() {
    auto mlp = make_mlp<tanh_layer>({2, 10, 2});

    tiny_dnn::vec_t vec_t;

    std::vector<vec_t> data = { {0.1, 0.9}, {0.9, 0.1} };
    std::vector<label_t> labels = { 1, 0 };

    mlp.train(data, labels); // T == label_t
}

void regression() {
    auto mlp = make_mlp<tanh_layer>({ 2, 10, 2 });

    std::vector<vec_t> data = { { 0.1, 0.9 }, { 0.9, 0.1 } };
    std::vector<vec_t> target = { { 0.3, 0.2 }, { 1.0, 0.0 } };

    mlp.train(data, target); // T == vec_t
}