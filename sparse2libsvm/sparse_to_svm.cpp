/*
 * sparse_to_svm.cpp
 *
 *  Created on: 2017��12��28��
 *      Author: lambdaji
 */
#include <iostream>
#include <omp.h>
#include <gflags/gflags.h>
#include <glog/logging.h>
//#include "thread_pool.h"


DEFINE_string(if_str, "/dockerdata/lambdaji/model_train/7.train_online_feature/000006_0.bml", "input file list");
DEFINE_string(parall_type, "openmp", "mpi,openmp,thread_pool");

int main(int argc, char **argv) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  // ���ü������ google::INFO ����־ͬʱ�������Ļ
  google::SetStderrLogging(google::GLOG_INFO);
  google::SetLogDestination(google::GLOG_INFO, "./log_info_"); //���� google::INFO �������־�洢·�����ļ���ǰ׺
  // �����������Ļ����־��ʾ��Ӧ��ɫ
  FLAGS_colorlogtostderr=true;

  LOG(INFO) << "argc=" << argc << std::endl;
  LOG(INFO) << "if_str=" << FLAGS_if_str << std::endl;
  LOG(INFO) << "parall_type=" << FLAGS_parall_type << std::endl;

  google::ShutdownGoogleLogging();
  return 0;
}

