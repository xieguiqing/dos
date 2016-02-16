## dos pod介绍
在dos里面引入了kubernetes pod概念，一个目的，绑定调度，即将几个container绑定在一起调度，从这也可看出
pod在dos中是最小的调度单元，而container是最小的运行单元。

### pod 支持了4种类型

* kPodBesteffort ,这种类型的pod需要资源小，调度和运行的优先级都特别低
* kPodBatch, 批处理任务类型，这种任务可能对cpu消耗大，但是运行时间短，它所占的资源会随着运行的结束而立即释放系统资源
* kPodLongrun ,服务性任务的实例，这种任务运行时间长，重要性很高，而它所占的资源不会随着实例因为运行出错或者core掉退出，而是会被保留，避免被其他服务占用资源
* kPodSystem, dos 内置的服务实例，比如监控进程，zk 类似的服务

### 调度器如何处理上面类型的pod

从以前开发类似调度系统来看，其实调度器频繁调度的主要是批处理任务，而服务任务不需要什么复杂的调度逻辑，也不需要频繁调度（频繁调度对服务型任务稳定性影响很大）
* 批处理任务调度，任务结束马上释放资源，每个节点限制批处理任务数
* 服务型任务调度，一开始分配好资源，就比较稳定了，资源一致保留着不释放，即使服务出问题，资源的生命周期不绑定到pod的生命周期上面

