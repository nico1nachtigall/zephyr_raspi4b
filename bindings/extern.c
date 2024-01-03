#include "bindings/bindings.h"

// Static wrappers

bool atomic_cas__extern(atomic_t *target, atomic_val_t old_value, atomic_val_t new_value) { return atomic_cas(target, old_value, new_value); }
bool atomic_ptr_cas__extern(atomic_ptr_t *target, atomic_ptr_val_t old_value, atomic_ptr_val_t new_value) { return atomic_ptr_cas(target, old_value, new_value); }
atomic_val_t atomic_add__extern(atomic_t *target, atomic_val_t value) { return atomic_add(target, value); }
atomic_val_t atomic_sub__extern(atomic_t *target, atomic_val_t value) { return atomic_sub(target, value); }
atomic_val_t atomic_inc__extern(atomic_t *target) { return atomic_inc(target); }
atomic_val_t atomic_dec__extern(atomic_t *target) { return atomic_dec(target); }
atomic_val_t atomic_get__extern(const atomic_t *target) { return atomic_get(target); }
atomic_ptr_val_t atomic_ptr_get__extern(const atomic_ptr_t *target) { return atomic_ptr_get(target); }
atomic_val_t atomic_set__extern(atomic_t *target, atomic_val_t value) { return atomic_set(target, value); }
atomic_ptr_val_t atomic_ptr_set__extern(atomic_ptr_t *target, atomic_ptr_val_t value) { return atomic_ptr_set(target, value); }
atomic_val_t atomic_clear__extern(atomic_t *target) { return atomic_clear(target); }
atomic_ptr_val_t atomic_ptr_clear__extern(atomic_ptr_t *target) { return atomic_ptr_clear(target); }
atomic_val_t atomic_or__extern(atomic_t *target, atomic_val_t value) { return atomic_or(target, value); }
atomic_val_t atomic_xor__extern(atomic_t *target, atomic_val_t value) { return atomic_xor(target, value); }
atomic_val_t atomic_and__extern(atomic_t *target, atomic_val_t value) { return atomic_and(target, value); }
atomic_val_t atomic_nand__extern(atomic_t *target, atomic_val_t value) { return atomic_nand(target, value); }
bool atomic_test_bit__extern(const atomic_t *target, int bit) { return atomic_test_bit(target, bit); }
bool atomic_test_and_clear_bit__extern(atomic_t *target, int bit) { return atomic_test_and_clear_bit(target, bit); }
bool atomic_test_and_set_bit__extern(atomic_t *target, int bit) { return atomic_test_and_set_bit(target, bit); }
void atomic_clear_bit__extern(atomic_t *target, int bit) { atomic_clear_bit(target, bit); }
void atomic_set_bit__extern(atomic_t *target, int bit) { atomic_set_bit(target, bit); }
void atomic_set_bit_to__extern(atomic_t *target, int bit, bool val) { atomic_set_bit_to(target, bit, val); }
bool is_power_of_two__extern(unsigned int x) { return is_power_of_two(x); }
int64_t arithmetic_shift_right__extern(int64_t value, uint8_t shift) { return arithmetic_shift_right(value, shift); }
void bytecpy__extern(void *dst, const void *src, size_t size) { bytecpy(dst, src, size); }
void byteswp__extern(void *a, void *b, size_t size) { byteswp(a, b, size); }
uint8_t bcd2bin__extern(uint8_t bcd) { return bcd2bin(bcd); }
uint8_t bin2bcd__extern(uint8_t bin) { return bin2bcd(bin); }
void sys_dlist_init__extern(sys_dlist_t *list) { sys_dlist_init(list); }
void sys_dnode_init__extern(sys_dnode_t *node) { sys_dnode_init(node); }
bool sys_dnode_is_linked__extern(const sys_dnode_t *node) { return sys_dnode_is_linked(node); }
bool sys_dlist_is_head__extern(sys_dlist_t *list, sys_dnode_t *node) { return sys_dlist_is_head(list, node); }
bool sys_dlist_is_tail__extern(sys_dlist_t *list, sys_dnode_t *node) { return sys_dlist_is_tail(list, node); }
bool sys_dlist_is_empty__extern(sys_dlist_t *list) { return sys_dlist_is_empty(list); }
bool sys_dlist_has_multiple_nodes__extern(sys_dlist_t *list) { return sys_dlist_has_multiple_nodes(list); }
sys_dnode_t * sys_dlist_peek_head__extern(sys_dlist_t *list) { return sys_dlist_peek_head(list); }
sys_dnode_t * sys_dlist_peek_head_not_empty__extern(sys_dlist_t *list) { return sys_dlist_peek_head_not_empty(list); }
sys_dnode_t * sys_dlist_peek_next_no_check__extern(sys_dlist_t *list, sys_dnode_t *node) { return sys_dlist_peek_next_no_check(list, node); }
sys_dnode_t * sys_dlist_peek_next__extern(sys_dlist_t *list, sys_dnode_t *node) { return sys_dlist_peek_next(list, node); }
sys_dnode_t * sys_dlist_peek_prev_no_check__extern(sys_dlist_t *list, sys_dnode_t *node) { return sys_dlist_peek_prev_no_check(list, node); }
sys_dnode_t * sys_dlist_peek_prev__extern(sys_dlist_t *list, sys_dnode_t *node) { return sys_dlist_peek_prev(list, node); }
sys_dnode_t * sys_dlist_peek_tail__extern(sys_dlist_t *list) { return sys_dlist_peek_tail(list); }
void sys_dlist_append__extern(sys_dlist_t *list, sys_dnode_t *node) { sys_dlist_append(list, node); }
void sys_dlist_prepend__extern(sys_dlist_t *list, sys_dnode_t *node) { sys_dlist_prepend(list, node); }
void sys_dlist_insert__extern(sys_dnode_t *successor, sys_dnode_t *node) { sys_dlist_insert(successor, node); }
void sys_dlist_insert_at__extern(sys_dlist_t *list, sys_dnode_t *node, int (*cond) (sys_dnode_t *node, void *data), void *data) { sys_dlist_insert_at(list, node, cond, data); }
void sys_dlist_remove__extern(sys_dnode_t *node) { sys_dlist_remove(node); }
sys_dnode_t * sys_dlist_get__extern(sys_dlist_t *list) { return sys_dlist_get(list); }
size_t sys_dlist_len__extern(sys_dlist_t *list) { return sys_dlist_len(list); }
struct rbnode * rb_get_min__extern(struct rbtree *tree) { return rb_get_min(tree); }
struct rbnode * rb_get_max__extern(struct rbtree *tree) { return rb_get_max(tree); }
void rb_walk__extern(struct rbtree *tree, rb_visit_t visit_fn, void *cookie) { rb_walk(tree, visit_fn, cookie); }
void sys_slist_init__extern(sys_slist_t *list) { sys_slist_init(list); }
sys_snode_t * z_snode_next_peek__extern(sys_snode_t *node) { return z_snode_next_peek(node); }
void z_snode_next_set__extern(sys_snode_t *parent, sys_snode_t *child) { z_snode_next_set(parent, child); }
void z_slist_head_set__extern(sys_slist_t *list, sys_snode_t *node) { z_slist_head_set(list, node); }
void z_slist_tail_set__extern(sys_slist_t *list, sys_snode_t *node) { z_slist_tail_set(list, node); }
sys_snode_t * sys_slist_peek_head__extern(sys_slist_t *list) { return sys_slist_peek_head(list); }
sys_snode_t * sys_slist_peek_tail__extern(sys_slist_t *list) { return sys_slist_peek_tail(list); }
bool sys_slist_is_empty__extern(sys_slist_t *list) { return sys_slist_is_empty(list); }
sys_snode_t * sys_slist_peek_next_no_check__extern(sys_snode_t *node) { return sys_slist_peek_next_no_check(node); }
sys_snode_t * sys_slist_peek_next__extern(sys_snode_t *node) { return sys_slist_peek_next(node); }
void sys_slist_prepend__extern(sys_slist_t *list, sys_snode_t *node) { sys_slist_prepend(list, node); }
void sys_slist_append__extern(sys_slist_t *list, sys_snode_t *node) { sys_slist_append(list, node); }
void sys_slist_append_list__extern(sys_slist_t *list, void *head, void *tail) { sys_slist_append_list(list, head, tail); }
void sys_slist_merge_slist__extern(sys_slist_t *list, sys_slist_t *list_to_append) { sys_slist_merge_slist(list, list_to_append); }
void sys_slist_insert__extern(sys_slist_t *list, sys_snode_t *prev, sys_snode_t *node) { sys_slist_insert(list, prev, node); }
sys_snode_t * sys_slist_get_not_empty__extern(sys_slist_t *list) { return sys_slist_get_not_empty(list); }
sys_snode_t * sys_slist_get__extern(sys_slist_t *list) { return sys_slist_get(list); }
void sys_slist_remove__extern(sys_slist_t *list, sys_snode_t *prev_node, sys_snode_t *node) { sys_slist_remove(list, prev_node, node); }
bool sys_slist_find_and_remove__extern(sys_slist_t *list, sys_snode_t *node) { return sys_slist_find_and_remove(list, node); }
size_t sys_slist_len__extern(sys_slist_t *list) { return sys_slist_len(list); }
void sys_sflist_init__extern(sys_sflist_t *list) { sys_sflist_init(list); }
sys_sfnode_t * z_sfnode_next_peek__extern(sys_sfnode_t *node) { return z_sfnode_next_peek(node); }
uint8_t sys_sfnode_flags_get__extern(sys_sfnode_t *node) { return sys_sfnode_flags_get(node); }
void z_sfnode_next_set__extern(sys_sfnode_t *parent, sys_sfnode_t *child) { z_sfnode_next_set(parent, child); }
void z_sflist_head_set__extern(sys_sflist_t *list, sys_sfnode_t *node) { z_sflist_head_set(list, node); }
void z_sflist_tail_set__extern(sys_sflist_t *list, sys_sfnode_t *node) { z_sflist_tail_set(list, node); }
sys_sfnode_t * sys_sflist_peek_head__extern(sys_sflist_t *list) { return sys_sflist_peek_head(list); }
sys_sfnode_t * sys_sflist_peek_tail__extern(sys_sflist_t *list) { return sys_sflist_peek_tail(list); }
void sys_sfnode_init__extern(sys_sfnode_t *node, uint8_t flags) { sys_sfnode_init(node, flags); }
void sys_sfnode_flags_set__extern(sys_sfnode_t *node, uint8_t flags) { sys_sfnode_flags_set(node, flags); }
bool sys_sflist_is_empty__extern(sys_sflist_t *list) { return sys_sflist_is_empty(list); }
sys_sfnode_t * sys_sflist_peek_next_no_check__extern(sys_sfnode_t *node) { return sys_sflist_peek_next_no_check(node); }
sys_sfnode_t * sys_sflist_peek_next__extern(sys_sfnode_t *node) { return sys_sflist_peek_next(node); }
void sys_sflist_prepend__extern(sys_sflist_t *list, sys_sfnode_t *node) { sys_sflist_prepend(list, node); }
void sys_sflist_append__extern(sys_sflist_t *list, sys_sfnode_t *node) { sys_sflist_append(list, node); }
void sys_sflist_append_list__extern(sys_sflist_t *list, void *head, void *tail) { sys_sflist_append_list(list, head, tail); }
void sys_sflist_merge_sflist__extern(sys_sflist_t *list, sys_sflist_t *list_to_append) { sys_sflist_merge_sflist(list, list_to_append); }
void sys_sflist_insert__extern(sys_sflist_t *list, sys_sfnode_t *prev, sys_sfnode_t *node) { sys_sflist_insert(list, prev, node); }
sys_sfnode_t * sys_sflist_get_not_empty__extern(sys_sflist_t *list) { return sys_sflist_get_not_empty(list); }
sys_sfnode_t * sys_sflist_get__extern(sys_sflist_t *list) { return sys_sflist_get(list); }
void sys_sflist_remove__extern(sys_sflist_t *list, sys_sfnode_t *prev_node, sys_sfnode_t *node) { sys_sflist_remove(list, prev_node, node); }
bool sys_sflist_find_and_remove__extern(sys_sflist_t *list, sys_sfnode_t *node) { return sys_sflist_find_and_remove(list, node); }
size_t sys_sflist_len__extern(sys_sflist_t *list) { return sys_sflist_len(list); }
bool z_syscall_trap__extern(void) { return z_syscall_trap(); }
bool k_is_user_context__extern(void) { return k_is_user_context(); }
void vprintk__extern(const char *fmt, va_list ap) { vprintk(fmt, ap); }
uint32_t arch_k_cycle_get_32__extern(void) { return arch_k_cycle_get_32(); }
uint64_t arch_k_cycle_get_64__extern(void) { return arch_k_cycle_get_64(); }
unsigned int arch_irq_lock__extern(void) { return arch_irq_lock(); }
void arch_irq_unlock__extern(unsigned int key) { arch_irq_unlock(key); }
bool arch_irq_unlocked__extern(unsigned int key) { return arch_irq_unlocked(key); }
unsigned int arch_num_cpus__extern(void) { return arch_num_cpus(); }
bool arch_mem_coherent__extern(void *ptr) { return arch_mem_coherent(ptr); }
void arch_cohere_stacks__extern(struct k_thread *old_thread, void *old_switch_handle, struct k_thread *new_thread) { arch_cohere_stacks(old_thread, old_switch_handle, new_thread); }
//uint64_t read_ccsidr_el1__extern(void) { return read_ccsidr_el1(); }
//void write_ccsidr_el1__extern(uint64_t val) { write_ccsidr_el1(val); }
//void zero_ccsidr_el1__extern(void) { zero_ccsidr_el1(); }
//uint64_t read_clidr_el1__extern(void) { return read_clidr_el1(); }
//void write_clidr_el1__extern(uint64_t val) { write_clidr_el1(val); }
//void zero_clidr_el1__extern(void) { zero_clidr_el1(); }
uint64_t read_cntfrq_el0__extern(void) { return read_cntfrq_el0(); }
void write_cntfrq_el0__extern(uint64_t val) { write_cntfrq_el0(val); }
void zero_cntfrq_el0__extern(void) { zero_cntfrq_el0(); }
uint64_t read_cnthctl_el2__extern(void) { return read_cnthctl_el2(); }
void write_cnthctl_el2__extern(uint64_t val) { write_cnthctl_el2(val); }
void zero_cnthctl_el2__extern(void) { zero_cnthctl_el2(); }
uint64_t read_cnthp_ctl_el2__extern(void) { return read_cnthp_ctl_el2(); }
void write_cnthp_ctl_el2__extern(uint64_t val) { write_cnthp_ctl_el2(val); }
void zero_cnthp_ctl_el2__extern(void) { zero_cnthp_ctl_el2(); }
//uint64_t read_cnthps_ctl_el2__extern(void) { return read_cnthps_ctl_el2(); }
//void write_cnthps_ctl_el2__extern(uint64_t val) { write_cnthps_ctl_el2(val); }
//void zero_cnthps_ctl_el2__extern(void) { zero_cnthps_ctl_el2(); }
uint64_t read_cntv_ctl_el0__extern(void) { return read_cntv_ctl_el0(); }
void write_cntv_ctl_el0__extern(uint64_t val) { write_cntv_ctl_el0(val); }
void zero_cntv_ctl_el0__extern(void) { zero_cntv_ctl_el0(); }
uint64_t read_cntv_cval_el0__extern(void) { return read_cntv_cval_el0(); }
void write_cntv_cval_el0__extern(uint64_t val) { write_cntv_cval_el0(val); }
void zero_cntv_cval_el0__extern(void) { zero_cntv_cval_el0(); }
//uint64_t read_cntvct_el0__extern(void) { return read_cntvct_el0(); }
//void write_cntvct_el0__extern(uint64_t val) { write_cntvct_el0(val); }
//void zero_cntvct_el0__extern(void) { zero_cntvct_el0(); }
uint64_t read_cntvoff_el2__extern(void) { return read_cntvoff_el2(); }
void write_cntvoff_el2__extern(uint64_t val) { write_cntvoff_el2(val); }
void zero_cntvoff_el2__extern(void) { zero_cntvoff_el2(); }
//uint64_t read_currentel__extern(void) { return read_currentel(); }
//void write_currentel__extern(uint64_t val) { write_currentel(val); }
//void zero_currentel__extern(void) { zero_currentel(); }
uint64_t read_csselr_el1__extern(void) { return read_csselr_el1(); }
void write_csselr_el1__extern(uint64_t val) { write_csselr_el1(val); }
void zero_csselr_el1__extern(void) { zero_csselr_el1(); }
uint64_t read_daif__extern(void) { return read_daif(); }
void write_daif__extern(uint64_t val) { write_daif(val); }
void zero_daif__extern(void) { zero_daif(); }
uint64_t read_hcr_el2__extern(void) { return read_hcr_el2(); }
void write_hcr_el2__extern(uint64_t val) { write_hcr_el2(val); }
void zero_hcr_el2__extern(void) { zero_hcr_el2(); }
//uint64_t read_id_aa64pfr0_el1__extern(void) { return read_id_aa64pfr0_el1(); }
//void write_id_aa64pfr0_el1__extern(uint64_t val) { write_id_aa64pfr0_el1(val); }
//void zero_id_aa64pfr0_el1__extern(void) { zero_id_aa64pfr0_el1(); }
//uint64_t read_id_aa64mmfr0_el1__extern(void) { return read_id_aa64mmfr0_el1(); }
//void write_id_aa64mmfr0_el1__extern(uint64_t val) { write_id_aa64mmfr0_el1(val); }
//void zero_id_aa64mmfr0_el1__extern(void) { zero_id_aa64mmfr0_el1(); }
//uint64_t read_mpidr_el1__extern(void) { return read_mpidr_el1(); }
//void write_mpidr_el1__extern(uint64_t val) { write_mpidr_el1(val); }
//void zero_mpidr_el1__extern(void) { zero_mpidr_el1(); }
uint64_t read_par_el1__extern(void) { return read_par_el1(); }
void write_par_el1__extern(uint64_t val) { write_par_el1(val); }
void zero_par_el1__extern(void) { zero_par_el1(); }
uint64_t read_scr_el3__extern(void) { return read_scr_el3(); }
void write_scr_el3__extern(uint64_t val) { write_scr_el3(val); }
void zero_scr_el3__extern(void) { zero_scr_el3(); }
uint64_t read_tpidrro_el0__extern(void) { return read_tpidrro_el0(); }
void write_tpidrro_el0__extern(uint64_t val) { write_tpidrro_el0(val); }
void zero_tpidrro_el0__extern(void) { zero_tpidrro_el0(); }
uint64_t read_vmpidr_el2__extern(void) { return read_vmpidr_el2(); }
void write_vmpidr_el2__extern(uint64_t val) { write_vmpidr_el2(val); }
void zero_vmpidr_el2__extern(void) { zero_vmpidr_el2(); }
uint64_t read_sp_el0__extern(void) { return read_sp_el0(); }
void write_sp_el0__extern(uint64_t val) { write_sp_el0(val); }
void zero_sp_el0__extern(void) { zero_sp_el0(); }
uint64_t read_actlr_el1__extern(void) { return read_actlr_el1(); }
void write_actlr_el1__extern(uint64_t val) { write_actlr_el1(val); }
void zero_actlr_el1__extern(void) { zero_actlr_el1(); }
uint64_t read_actlr_el2__extern(void) { return read_actlr_el2(); }
void write_actlr_el2__extern(uint64_t val) { write_actlr_el2(val); }
void zero_actlr_el2__extern(void) { zero_actlr_el2(); }
uint64_t read_actlr_el3__extern(void) { return read_actlr_el3(); }
void write_actlr_el3__extern(uint64_t val) { write_actlr_el3(val); }
void zero_actlr_el3__extern(void) { zero_actlr_el3(); }
uint64_t read_cpacr_el1__extern(void) { return read_cpacr_el1(); }
void write_cpacr_el1__extern(uint64_t val) { write_cpacr_el1(val); }
void zero_cpacr_el1__extern(void) { zero_cpacr_el1(); }
//uint64_t read_cpacr_el2__extern(void) { return read_cpacr_el2(); }
//void write_cpacr_el2__extern(uint64_t val) { write_cpacr_el2(val); }
//void zero_cpacr_el2__extern(void) { zero_cpacr_el2(); }
//uint64_t read_cpacr_el3__extern(void) { return read_cpacr_el3(); }
//void write_cpacr_el3__extern(uint64_t val) { write_cpacr_el3(val); }
//void zero_cpacr_el3__extern(void) { zero_cpacr_el3(); }
//uint64_t read_cptr_el1__extern(void) { return read_cptr_el1(); }
//void write_cptr_el1__extern(uint64_t val) { write_cptr_el1(val); }
//void zero_cptr_el1__extern(void) { zero_cptr_el1(); }
uint64_t read_cptr_el2__extern(void) { return read_cptr_el2(); }
void write_cptr_el2__extern(uint64_t val) { write_cptr_el2(val); }
void zero_cptr_el2__extern(void) { zero_cptr_el2(); }
uint64_t read_cptr_el3__extern(void) { return read_cptr_el3(); }
void write_cptr_el3__extern(uint64_t val) { write_cptr_el3(val); }
void zero_cptr_el3__extern(void) { zero_cptr_el3(); }
uint64_t read_elr_el1__extern(void) { return read_elr_el1(); }
void write_elr_el1__extern(uint64_t val) { write_elr_el1(val); }
void zero_elr_el1__extern(void) { zero_elr_el1(); }
uint64_t read_elr_el2__extern(void) { return read_elr_el2(); }
void write_elr_el2__extern(uint64_t val) { write_elr_el2(val); }
void zero_elr_el2__extern(void) { zero_elr_el2(); }
uint64_t read_elr_el3__extern(void) { return read_elr_el3(); }
void write_elr_el3__extern(uint64_t val) { write_elr_el3(val); }
void zero_elr_el3__extern(void) { zero_elr_el3(); }
uint64_t read_esr_el1__extern(void) { return read_esr_el1(); }
void write_esr_el1__extern(uint64_t val) { write_esr_el1(val); }
void zero_esr_el1__extern(void) { zero_esr_el1(); }
uint64_t read_esr_el2__extern(void) { return read_esr_el2(); }
void write_esr_el2__extern(uint64_t val) { write_esr_el2(val); }
void zero_esr_el2__extern(void) { zero_esr_el2(); }
uint64_t read_esr_el3__extern(void) { return read_esr_el3(); }
void write_esr_el3__extern(uint64_t val) { write_esr_el3(val); }
void zero_esr_el3__extern(void) { zero_esr_el3(); }
uint64_t read_far_el1__extern(void) { return read_far_el1(); }
void write_far_el1__extern(uint64_t val) { write_far_el1(val); }
void zero_far_el1__extern(void) { zero_far_el1(); }
uint64_t read_far_el2__extern(void) { return read_far_el2(); }
void write_far_el2__extern(uint64_t val) { write_far_el2(val); }
void zero_far_el2__extern(void) { zero_far_el2(); }
uint64_t read_far_el3__extern(void) { return read_far_el3(); }
void write_far_el3__extern(uint64_t val) { write_far_el3(val); }
void zero_far_el3__extern(void) { zero_far_el3(); }
uint64_t read_mair_el1__extern(void) { return read_mair_el1(); }
void write_mair_el1__extern(uint64_t val) { write_mair_el1(val); }
void zero_mair_el1__extern(void) { zero_mair_el1(); }
uint64_t read_mair_el2__extern(void) { return read_mair_el2(); }
void write_mair_el2__extern(uint64_t val) { write_mair_el2(val); }
void zero_mair_el2__extern(void) { zero_mair_el2(); }
uint64_t read_mair_el3__extern(void) { return read_mair_el3(); }
void write_mair_el3__extern(uint64_t val) { write_mair_el3(val); }
void zero_mair_el3__extern(void) { zero_mair_el3(); }
uint64_t read_sctlr_el1__extern(void) { return read_sctlr_el1(); }
void write_sctlr_el1__extern(uint64_t val) { write_sctlr_el1(val); }
void zero_sctlr_el1__extern(void) { zero_sctlr_el1(); }
uint64_t read_sctlr_el2__extern(void) { return read_sctlr_el2(); }
void write_sctlr_el2__extern(uint64_t val) { write_sctlr_el2(val); }
void zero_sctlr_el2__extern(void) { zero_sctlr_el2(); }
uint64_t read_sctlr_el3__extern(void) { return read_sctlr_el3(); }
void write_sctlr_el3__extern(uint64_t val) { write_sctlr_el3(val); }
void zero_sctlr_el3__extern(void) { zero_sctlr_el3(); }
uint64_t read_spsr_el1__extern(void) { return read_spsr_el1(); }
void write_spsr_el1__extern(uint64_t val) { write_spsr_el1(val); }
void zero_spsr_el1__extern(void) { zero_spsr_el1(); }
uint64_t read_spsr_el2__extern(void) { return read_spsr_el2(); }
void write_spsr_el2__extern(uint64_t val) { write_spsr_el2(val); }
void zero_spsr_el2__extern(void) { zero_spsr_el2(); }
uint64_t read_spsr_el3__extern(void) { return read_spsr_el3(); }
void write_spsr_el3__extern(uint64_t val) { write_spsr_el3(val); }
void zero_spsr_el3__extern(void) { zero_spsr_el3(); }
uint64_t read_tcr_el1__extern(void) { return read_tcr_el1(); }
void write_tcr_el1__extern(uint64_t val) { write_tcr_el1(val); }
void zero_tcr_el1__extern(void) { zero_tcr_el1(); }
uint64_t read_tcr_el2__extern(void) { return read_tcr_el2(); }
void write_tcr_el2__extern(uint64_t val) { write_tcr_el2(val); }
void zero_tcr_el2__extern(void) { zero_tcr_el2(); }
uint64_t read_tcr_el3__extern(void) { return read_tcr_el3(); }
void write_tcr_el3__extern(uint64_t val) { write_tcr_el3(val); }
void zero_tcr_el3__extern(void) { zero_tcr_el3(); }
uint64_t read_ttbr0_el1__extern(void) { return read_ttbr0_el1(); }
void write_ttbr0_el1__extern(uint64_t val) { write_ttbr0_el1(val); }
void zero_ttbr0_el1__extern(void) { zero_ttbr0_el1(); }
uint64_t read_ttbr0_el2__extern(void) { return read_ttbr0_el2(); }
void write_ttbr0_el2__extern(uint64_t val) { write_ttbr0_el2(val); }
void zero_ttbr0_el2__extern(void) { zero_ttbr0_el2(); }
uint64_t read_ttbr0_el3__extern(void) { return read_ttbr0_el3(); }
void write_ttbr0_el3__extern(uint64_t val) { write_ttbr0_el3(val); }
void zero_ttbr0_el3__extern(void) { zero_ttbr0_el3(); }
uint64_t read_vbar_el1__extern(void) { return read_vbar_el1(); }
void write_vbar_el1__extern(uint64_t val) { write_vbar_el1(val); }
void zero_vbar_el1__extern(void) { zero_vbar_el1(); }
uint64_t read_vbar_el2__extern(void) { return read_vbar_el2(); }
void write_vbar_el2__extern(uint64_t val) { write_vbar_el2(val); }
void zero_vbar_el2__extern(void) { zero_vbar_el2(); }
uint64_t read_vbar_el3__extern(void) { return read_vbar_el3(); }
void write_vbar_el3__extern(uint64_t val) { write_vbar_el3(val); }
void zero_vbar_el3__extern(void) { zero_vbar_el3(); }
void enable_debug_exceptions__extern(void) { enable_debug_exceptions(); }
void disable_debug_exceptions__extern(void) { disable_debug_exceptions(); }
void enable_serror_exceptions__extern(void) { enable_serror_exceptions(); }
void disable_serror_exceptions__extern(void) { disable_serror_exceptions(); }
void enable_irq__extern(void) { enable_irq(); }
void disable_irq__extern(void) { disable_irq(); }
void enable_fiq__extern(void) { enable_fiq(); }
void disable_fiq__extern(void) { disable_fiq(); }
bool is_el_implemented__extern(unsigned int el) { return is_el_implemented(el); }
bool is_el_highest_implemented__extern(void) { return is_el_highest_implemented(); }
bool is_el2_sec_supported__extern(void) { return is_el2_sec_supported(); }
bool is_in_secure_state__extern(void) { return is_in_secure_state(); }
_cpu_t * arch_curr_cpu__extern(void) { return arch_curr_cpu(); }
int arch_exception_depth__extern(void) { return arch_exception_depth(); }
uint32_t arch_proc_id__extern(void) { return arch_proc_id(); }
int irq_connect_dynamic__extern(unsigned int irq, unsigned int priority, void (*routine) (const void *parameter), const void *parameter, uint32_t flags) { return irq_connect_dynamic(irq, priority, routine, parameter, flags); }
int irq_disconnect_dynamic__extern(unsigned int irq, unsigned int priority, void (*routine) (const void *parameter), const void *parameter, uint32_t flags) { return irq_disconnect_dynamic(irq, priority, routine, parameter, flags); }
uintptr_t z_mem_phys_addr__extern(void *virt) { return z_mem_phys_addr(virt); }
void * z_mem_virt_addr__extern(uintptr_t phys) { return z_mem_virt_addr(phys); }
device_handle_t device_handle_get__extern(const struct device *dev) { return device_handle_get(dev); }
const struct device * device_from_handle__extern(device_handle_t dev_handle) { return device_from_handle(dev_handle); }
const struct device * device_get_binding__extern(const char *name) { return device_get_binding(name); }
bool device_is_ready__extern(const struct device *dev) { return device_is_ready(dev); }
bool z_impl_device_is_ready__extern(const struct device *dev) { return z_impl_device_is_ready(dev); }
void arch_nop__extern(void) { arch_nop(); }
void barrier_dmem_fence_full__extern(void) { barrier_dmem_fence_full(); }
void barrier_dsync_fence_full__extern(void) { barrier_dsync_fence_full(); }
void barrier_isync_fence_full__extern(void) { barrier_isync_fence_full(); }
uint8_t sys_read8__extern(mem_addr_t addr) { return sys_read8(addr); }
void sys_write8__extern(uint8_t data, mem_addr_t addr) { sys_write8(data, addr); }
uint16_t sys_read16__extern(mem_addr_t addr) { return sys_read16(addr); }
void sys_write16__extern(uint16_t data, mem_addr_t addr) { sys_write16(data, addr); }
uint32_t sys_read32__extern(mem_addr_t addr) { return sys_read32(addr); }
void sys_write32__extern(uint32_t data, mem_addr_t addr) { sys_write32(data, addr); }
uint64_t sys_read64__extern(mem_addr_t addr) { return sys_read64(addr); }
void sys_write64__extern(uint64_t data, mem_addr_t addr) { sys_write64(data, addr); }
void arm_arch_timer_init__extern(void) { arm_arch_timer_init(); }
void arm_arch_timer_set_compare__extern(uint64_t val) { arm_arch_timer_set_compare(val); }
void arm_arch_timer_enable__extern(unsigned char enable) { arm_arch_timer_enable(enable); }
void arm_arch_timer_set_irq_mask__extern(bool mask) { arm_arch_timer_set_irq_mask(mask); }
uint64_t arm_arch_timer_count__extern(void) { return arm_arch_timer_count(); }
void sys_set_bit__extern(mem_addr_t addr, unsigned int bit) { sys_set_bit(addr, bit); }
void sys_clear_bit__extern(mem_addr_t addr, unsigned int bit) { sys_clear_bit(addr, bit); }
int sys_test_bit__extern(mem_addr_t addr, unsigned int bit) { return sys_test_bit(addr, bit); }
void sys_set_bits__extern(mem_addr_t addr, unsigned int mask) { sys_set_bits(addr, mask); }
void sys_clear_bits__extern(mem_addr_t addr, unsigned int mask) { sys_clear_bits(addr, mask); }
void sys_bitfield_set_bit__extern(mem_addr_t addr, unsigned int bit) { sys_bitfield_set_bit(addr, bit); }
void sys_bitfield_clear_bit__extern(mem_addr_t addr, unsigned int bit) { sys_bitfield_clear_bit(addr, bit); }
int sys_bitfield_test_bit__extern(mem_addr_t addr, unsigned int bit) { return sys_bitfield_test_bit(addr, bit); }
int sys_test_and_set_bit__extern(mem_addr_t addr, unsigned int bit) { return sys_test_and_set_bit(addr, bit); }
int sys_test_and_clear_bit__extern(mem_addr_t addr, unsigned int bit) { return sys_test_and_clear_bit(addr, bit); }
int sys_bitfield_test_and_set_bit__extern(mem_addr_t addr, unsigned int bit) { return sys_bitfield_test_and_set_bit(addr, bit); }
int sys_bitfield_test_and_clear_bit__extern(mem_addr_t addr, unsigned int bit) { return sys_bitfield_test_and_clear_bit(addr, bit); }
unsigned int find_msb_set__extern(uint32_t op) { return find_msb_set(op); }
unsigned int find_lsb_set__extern(uint32_t op) { return find_lsb_set(op); }
k_timepoint_t sys_timepoint_calc__extern(k_timeout_t timeout) { return sys_timepoint_calc(timeout); }
k_timeout_t sys_timepoint_timeout__extern(k_timepoint_t timepoint) { return sys_timepoint_timeout(timepoint); }
int sys_timepoint_cmp__extern(k_timepoint_t a, k_timepoint_t b) { return sys_timepoint_cmp(a, b); }
bool sys_timepoint_expired__extern(k_timepoint_t timepoint) { return sys_timepoint_expired(timepoint); }
void z_spinlock_validate_pre__extern(struct k_spinlock *l) { z_spinlock_validate_pre(l); }
void z_spinlock_validate_post__extern(struct k_spinlock *l) { z_spinlock_validate_post(l); }
k_spinlock_key_t k_spin_lock__extern(struct k_spinlock *l) { return k_spin_lock(l); }
int k_spin_trylock__extern(struct k_spinlock *l, k_spinlock_key_t *k) { return k_spin_trylock(l, k); }
void k_spin_unlock__extern(struct k_spinlock *l, k_spinlock_key_t key) { k_spin_unlock(l, key); }
void k_spin_release__extern(struct k_spinlock *l) { k_spin_release(l); }
char * z_stack_ptr_align__extern(char *ptr) { return z_stack_ptr_align(ptr); }
char * Z_KERNEL_STACK_BUFFER__extern(k_thread_stack_t *sym) { return Z_KERNEL_STACK_BUFFER(sym); }
void k_object_init__extern(const void *obj) { k_object_init(obj); }
struct k_object * k_object_create_dynamic_aligned__extern(size_t align, size_t size) { return k_object_create_dynamic_aligned(align, size); }
struct k_object * k_object_create_dynamic__extern(size_t size) { return k_object_create_dynamic(size); }
void z_impl_k_object_access_grant__extern(const void *object, struct k_thread *thread) { z_impl_k_object_access_grant(object, thread); }
void k_object_access_revoke__extern(const void *object, struct k_thread *thread) { k_object_access_revoke(object, thread); }
void z_impl_k_object_release__extern(const void *object) { z_impl_k_object_release(object); }
void k_object_access_all_grant__extern(const void *object) { k_object_access_all_grant(object); }
bool k_object_is_valid__extern(const void *obj, enum k_objects otype) { return k_object_is_valid(obj, otype); }
void * z_impl_k_object_alloc__extern(enum k_objects otype) { return z_impl_k_object_alloc(otype); }
void * z_impl_k_object_alloc_size__extern(enum k_objects otype, size_t size) { return z_impl_k_object_alloc_size(otype, size); }
void k_object_free__extern(void *obj) { k_object_free(obj); }
void k_object_access_grant__extern(const void *object, struct k_thread *thread) { k_object_access_grant(object, thread); }
void k_object_release__extern(const void *object) { k_object_release(object); }
void * k_object_alloc__extern(enum k_objects otype) { return k_object_alloc(otype); }
void * k_object_alloc_size__extern(enum k_objects otype, size_t size) { return k_object_alloc_size(otype, size); }
k_thread_stack_t * k_thread_stack_alloc__extern(size_t size, int flags) { return k_thread_stack_alloc(size, flags); }
int k_thread_stack_free__extern(k_thread_stack_t *stack) { return k_thread_stack_free(stack); }
k_tid_t k_thread_create__extern(struct k_thread *new_thread, k_thread_stack_t *stack, size_t stack_size, k_thread_entry_t entry, void *p1, void *p2, void *p3, int prio, uint32_t options, k_timeout_t delay) { return k_thread_create(new_thread, stack, stack_size, entry, p1, p2, p3, prio, options, delay); }
void k_thread_heap_assign__extern(struct k_thread *thread, struct k_heap *heap) { k_thread_heap_assign(thread, heap); }
int k_thread_join__extern(struct k_thread *thread, k_timeout_t timeout) { return k_thread_join(thread, timeout); }
int32_t k_sleep__extern(k_timeout_t timeout) { return k_sleep(timeout); }
int32_t k_msleep__extern(int32_t ms) { return k_msleep(ms); }
int32_t k_usleep__extern(int32_t us) { return k_usleep(us); }
void k_busy_wait__extern(uint32_t usec_to_wait) { k_busy_wait(usec_to_wait); }
void k_yield__extern(void) { k_yield(); }
void k_wakeup__extern(k_tid_t thread) { k_wakeup(thread); }
k_tid_t k_sched_current_thread_query__extern(void) { return k_sched_current_thread_query(); }
k_tid_t k_current_get__extern(void) { return k_current_get(); }
void k_thread_abort__extern(k_tid_t thread) { k_thread_abort(thread); }
void k_thread_start__extern(k_tid_t thread) { k_thread_start(thread); }
int k_thread_priority_get__extern(k_tid_t thread) { return k_thread_priority_get(thread); }
void k_thread_priority_set__extern(k_tid_t thread, int prio) { k_thread_priority_set(thread, prio); }
void k_thread_suspend__extern(k_tid_t thread) { k_thread_suspend(thread); }
void k_thread_resume__extern(k_tid_t thread) { k_thread_resume(thread); }
int k_is_preempt_thread__extern(void) { return k_is_preempt_thread(); }
bool k_is_pre_kernel__extern(void) { return k_is_pre_kernel(); }
void k_thread_custom_data_set__extern(void *value) { k_thread_custom_data_set(value); }
void * k_thread_custom_data_get__extern(void) { return k_thread_custom_data_get(); }
int k_thread_name_set__extern(k_tid_t thread, const char *str) { return k_thread_name_set(thread, str); }
int k_thread_name_copy__extern(k_tid_t thread, char *buf, size_t size) { return k_thread_name_copy(thread, buf, size); }
void k_timer_start__extern(struct k_timer *timer, k_timeout_t duration, k_timeout_t period) { k_timer_start(timer, duration, period); }
void k_timer_stop__extern(struct k_timer *timer) { k_timer_stop(timer); }
uint32_t k_timer_status_get__extern(struct k_timer *timer) { return k_timer_status_get(timer); }
uint32_t k_timer_status_sync__extern(struct k_timer *timer) { return k_timer_status_sync(timer); }
void k_timer_user_data_set__extern(struct k_timer *timer, void *user_data) { k_timer_user_data_set(timer, user_data); }
void z_impl_k_timer_user_data_set__extern(struct k_timer *timer, void *user_data) { z_impl_k_timer_user_data_set(timer, user_data); }
void * k_timer_user_data_get__extern(const struct k_timer *timer) { return k_timer_user_data_get(timer); }
void * z_impl_k_timer_user_data_get__extern(const struct k_timer *timer) { return z_impl_k_timer_user_data_get(timer); }
int64_t k_uptime_ticks__extern(void) { return k_uptime_ticks(); }
int64_t k_uptime_get__extern(void) { return k_uptime_get(); }
uint32_t k_uptime_get_32__extern(void) { return k_uptime_get_32(); }
int64_t k_uptime_delta__extern(int64_t *reftime) { return k_uptime_delta(reftime); }
uint32_t k_cycle_get_32__extern(void) { return k_cycle_get_32(); }
uint64_t k_cycle_get_64__extern(void) { return k_cycle_get_64(); }
void k_queue_init__extern(struct k_queue *queue) { k_queue_init(queue); }
void k_queue_cancel_wait__extern(struct k_queue *queue) { k_queue_cancel_wait(queue); }
int32_t k_queue_alloc_append__extern(struct k_queue *queue, void *data) { return k_queue_alloc_append(queue, data); }
int32_t k_queue_alloc_prepend__extern(struct k_queue *queue, void *data) { return k_queue_alloc_prepend(queue, data); }
void * k_queue_get__extern(struct k_queue *queue, k_timeout_t timeout) { return k_queue_get(queue, timeout); }
int k_queue_is_empty__extern(struct k_queue *queue) { return k_queue_is_empty(queue); }
int z_impl_k_queue_is_empty__extern(struct k_queue *queue) { return z_impl_k_queue_is_empty(queue); }
void * k_queue_peek_head__extern(struct k_queue *queue) { return k_queue_peek_head(queue); }
void * k_queue_peek_tail__extern(struct k_queue *queue) { return k_queue_peek_tail(queue); }
void k_event_init__extern(struct k_event *event) { k_event_init(event); }
uint32_t k_event_post__extern(struct k_event *event, uint32_t events) { return k_event_post(event, events); }
uint32_t k_event_set__extern(struct k_event *event, uint32_t events) { return k_event_set(event, events); }
uint32_t k_event_set_masked__extern(struct k_event *event, uint32_t events, uint32_t events_mask) { return k_event_set_masked(event, events, events_mask); }
uint32_t k_event_clear__extern(struct k_event *event, uint32_t events) { return k_event_clear(event, events); }
uint32_t k_event_wait__extern(struct k_event *event, uint32_t events, bool reset, k_timeout_t timeout) { return k_event_wait(event, events, reset, timeout); }
uint32_t k_event_wait_all__extern(struct k_event *event, uint32_t events, bool reset, k_timeout_t timeout) { return k_event_wait_all(event, events, reset, timeout); }
uint32_t k_event_test__extern(struct k_event *event, uint32_t events_mask) { return k_event_test(event, events_mask); }
int32_t k_stack_alloc_init__extern(struct k_stack *stack, uint32_t num_entries) { return k_stack_alloc_init(stack, num_entries); }
int k_stack_push__extern(struct k_stack *stack, stack_data_t data) { return k_stack_push(stack, data); }
int k_stack_pop__extern(struct k_stack *stack, stack_data_t *data, k_timeout_t timeout) { return k_stack_pop(stack, data, timeout); }
int k_mutex_init__extern(struct k_mutex *mutex) { return k_mutex_init(mutex); }
int k_mutex_lock__extern(struct k_mutex *mutex, k_timeout_t timeout) { return k_mutex_lock(mutex, timeout); }
int k_mutex_unlock__extern(struct k_mutex *mutex) { return k_mutex_unlock(mutex); }
int k_condvar_init__extern(struct k_condvar *condvar) { return k_condvar_init(condvar); }
int k_condvar_signal__extern(struct k_condvar *condvar) { return k_condvar_signal(condvar); }
int k_condvar_broadcast__extern(struct k_condvar *condvar) { return k_condvar_broadcast(condvar); }
int k_condvar_wait__extern(struct k_condvar *condvar, struct k_mutex *mutex, k_timeout_t timeout) { return k_condvar_wait(condvar, mutex, timeout); }
int k_sem_init__extern(struct k_sem *sem, unsigned int initial_count, unsigned int limit) { return k_sem_init(sem, initial_count, limit); }
int k_sem_take__extern(struct k_sem *sem, k_timeout_t timeout) { return k_sem_take(sem, timeout); }
void k_sem_give__extern(struct k_sem *sem) { k_sem_give(sem); }
void k_sem_reset__extern(struct k_sem *sem) { k_sem_reset(sem); }
unsigned int k_sem_count_get__extern(struct k_sem *sem) { return k_sem_count_get(sem); }
unsigned int z_impl_k_sem_count_get__extern(struct k_sem *sem) { return z_impl_k_sem_count_get(sem); }
bool k_work_is_pending__extern(const struct k_work *work) { return k_work_is_pending(work); }
k_tid_t k_work_queue_thread_get__extern(struct k_work_q *queue) { return k_work_queue_thread_get(queue); }
struct k_work_delayable * k_work_delayable_from_work__extern(struct k_work *work) { return k_work_delayable_from_work(work); }
bool k_work_delayable_is_pending__extern(const struct k_work_delayable *dwork) { return k_work_delayable_is_pending(dwork); }
k_ticks_t k_work_delayable_expires_get__extern(const struct k_work_delayable *dwork) { return k_work_delayable_expires_get(dwork); }
k_ticks_t k_work_delayable_remaining_get__extern(const struct k_work_delayable *dwork) { return k_work_delayable_remaining_get(dwork); }
void k_work_user_init__extern(struct k_work_user *work, k_work_user_handler_t handler) { k_work_user_init(work, handler); }
bool k_work_user_is_pending__extern(struct k_work_user *work) { return k_work_user_is_pending(work); }
int k_work_user_submit_to_queue__extern(struct k_work_user_q *work_q, struct k_work_user *work) { return k_work_user_submit_to_queue(work_q, work); }
k_tid_t k_work_user_queue_thread_get__extern(struct k_work_user_q *work_q) { return k_work_user_queue_thread_get(work_q); }
int k_msgq_alloc_init__extern(struct k_msgq *msgq, size_t msg_size, uint32_t max_msgs) { return k_msgq_alloc_init(msgq, msg_size, max_msgs); }
int k_msgq_put__extern(struct k_msgq *msgq, const void *data, k_timeout_t timeout) { return k_msgq_put(msgq, data, timeout); }
int k_msgq_get__extern(struct k_msgq *msgq, void *data, k_timeout_t timeout) { return k_msgq_get(msgq, data, timeout); }
int k_msgq_peek__extern(struct k_msgq *msgq, void *data) { return k_msgq_peek(msgq, data); }
int k_msgq_peek_at__extern(struct k_msgq *msgq, void *data, uint32_t idx) { return k_msgq_peek_at(msgq, data, idx); }
void k_msgq_purge__extern(struct k_msgq *msgq) { k_msgq_purge(msgq); }
uint32_t k_msgq_num_free_get__extern(struct k_msgq *msgq) { return k_msgq_num_free_get(msgq); }
void k_msgq_get_attrs__extern(struct k_msgq *msgq, struct k_msgq_attrs *attrs) { k_msgq_get_attrs(msgq, attrs); }
uint32_t z_impl_k_msgq_num_free_get__extern(struct k_msgq *msgq) { return z_impl_k_msgq_num_free_get(msgq); }
uint32_t k_msgq_num_used_get__extern(struct k_msgq *msgq) { return k_msgq_num_used_get(msgq); }
uint32_t z_impl_k_msgq_num_used_get__extern(struct k_msgq *msgq) { return z_impl_k_msgq_num_used_get(msgq); }
int k_pipe_alloc_init__extern(struct k_pipe *pipe, size_t size) { return k_pipe_alloc_init(pipe, size); }
int k_pipe_put__extern(struct k_pipe *pipe, const void *data, size_t bytes_to_write, size_t *bytes_written, size_t min_xfer, k_timeout_t timeout) { return k_pipe_put(pipe, data, bytes_to_write, bytes_written, min_xfer, timeout); }
int k_pipe_get__extern(struct k_pipe *pipe, void *data, size_t bytes_to_read, size_t *bytes_read, size_t min_xfer, k_timeout_t timeout) { return k_pipe_get(pipe, data, bytes_to_read, bytes_read, min_xfer, timeout); }
size_t k_pipe_read_avail__extern(struct k_pipe *pipe) { return k_pipe_read_avail(pipe); }
size_t k_pipe_write_avail__extern(struct k_pipe *pipe) { return k_pipe_write_avail(pipe); }
void k_pipe_flush__extern(struct k_pipe *pipe) { k_pipe_flush(pipe); }
void k_pipe_buffer_flush__extern(struct k_pipe *pipe) { k_pipe_buffer_flush(pipe); }
uint32_t k_mem_slab_num_used_get__extern(struct k_mem_slab *slab) { return k_mem_slab_num_used_get(slab); }
uint32_t k_mem_slab_max_used_get__extern(struct k_mem_slab *slab) { return k_mem_slab_max_used_get(slab); }
uint32_t k_mem_slab_num_free_get__extern(struct k_mem_slab *slab) { return k_mem_slab_num_free_get(slab); }
int k_poll__extern(struct k_poll_event *events, int num_events, k_timeout_t timeout) { return k_poll(events, num_events, timeout); }
void k_poll_signal_init__extern(struct k_poll_signal *sig) { k_poll_signal_init(sig); }
void k_poll_signal_reset__extern(struct k_poll_signal *sig) { k_poll_signal_reset(sig); }
void k_poll_signal_check__extern(struct k_poll_signal *sig, unsigned int *signaled, int *result) { k_poll_signal_check(sig, signaled, result); }
int k_poll_signal_raise__extern(struct k_poll_signal *sig, int result) { return k_poll_signal_raise(sig, result); }
void k_cpu_idle__extern(void) { k_cpu_idle(); }
void k_cpu_atomic_idle__extern(unsigned int key) { k_cpu_atomic_idle(key); }
int k_float_disable__extern(struct k_thread *thread) { return k_float_disable(thread); }
int k_float_enable__extern(struct k_thread *thread, unsigned int options) { return k_float_enable(thread, options); }
int k_thread_stack_space_get__extern(const struct k_thread *thread, size_t *unused_ptr) { return k_thread_stack_space_get(thread, unused_ptr); }
k_ticks_t k_thread_timeout_expires_ticks__extern(const struct k_thread *t) { return k_thread_timeout_expires_ticks(t); }
k_ticks_t k_thread_timeout_remaining_ticks__extern(const struct k_thread *t) { return k_thread_timeout_remaining_ticks(t); }
void k_thread_deadline_set__extern(k_tid_t thread, int deadline) { k_thread_deadline_set(thread, deadline); }
k_ticks_t k_timer_expires_ticks__extern(const struct k_timer *timer) { return k_timer_expires_ticks(timer); }
k_ticks_t k_timer_remaining_ticks__extern(const struct k_timer *timer) { return k_timer_remaining_ticks(timer); }
int k_futex_wait__extern(struct k_futex *futex, int expected, k_timeout_t timeout) { return k_futex_wait(futex, expected, timeout); }
int k_futex_wake__extern(struct k_futex *futex, bool wake_all) { return k_futex_wake(futex, wake_all); }
void k_str_out__extern(char *c, size_t n) { k_str_out(c, n); }
bool gpio_is_ready_dt__extern(const struct gpio_dt_spec *spec) { return gpio_is_ready_dt(spec); }
int gpio_pin_interrupt_configure__extern(const struct device *port, gpio_pin_t pin, gpio_flags_t flags) { return gpio_pin_interrupt_configure(port, pin, flags); }
int z_impl_gpio_pin_interrupt_configure__extern(const struct device *port, gpio_pin_t pin, gpio_flags_t flags) { return z_impl_gpio_pin_interrupt_configure(port, pin, flags); }
int gpio_pin_interrupt_configure_dt__extern(const struct gpio_dt_spec *spec, gpio_flags_t flags) { return gpio_pin_interrupt_configure_dt(spec, flags); }
int gpio_pin_configure__extern(const struct device *port, gpio_pin_t pin, gpio_flags_t flags) { return gpio_pin_configure(port, pin, flags); }
int z_impl_gpio_pin_configure__extern(const struct device *port, gpio_pin_t pin, gpio_flags_t flags) { return z_impl_gpio_pin_configure(port, pin, flags); }
int gpio_pin_configure_dt__extern(const struct gpio_dt_spec *spec, gpio_flags_t extra_flags) { return gpio_pin_configure_dt(spec, extra_flags); }
int gpio_port_get_direction__extern(const struct device *port, gpio_port_pins_t map, gpio_port_pins_t *inputs, gpio_port_pins_t *outputs) { return gpio_port_get_direction(port, map, inputs, outputs); }
int gpio_pin_is_input__extern(const struct device *port, gpio_pin_t pin) { return gpio_pin_is_input(port, pin); }
int gpio_pin_is_input_dt__extern(const struct gpio_dt_spec *spec) { return gpio_pin_is_input_dt(spec); }
int gpio_pin_is_output__extern(const struct device *port, gpio_pin_t pin) { return gpio_pin_is_output(port, pin); }
int gpio_pin_is_output_dt__extern(const struct gpio_dt_spec *spec) { return gpio_pin_is_output_dt(spec); }
int gpio_pin_get_config__extern(const struct device *port, gpio_pin_t pin, gpio_flags_t *flags) { return gpio_pin_get_config(port, pin, flags); }
int gpio_pin_get_config_dt__extern(const struct gpio_dt_spec *spec, gpio_flags_t *flags) { return gpio_pin_get_config_dt(spec, flags); }
int gpio_port_get_raw__extern(const struct device *port, gpio_port_value_t *value) { return gpio_port_get_raw(port, value); }
int z_impl_gpio_port_get_raw__extern(const struct device *port, gpio_port_value_t *value) { return z_impl_gpio_port_get_raw(port, value); }
int gpio_port_get__extern(const struct device *port, gpio_port_value_t *value) { return gpio_port_get(port, value); }
int gpio_port_set_masked_raw__extern(const struct device *port, gpio_port_pins_t mask, gpio_port_value_t value) { return gpio_port_set_masked_raw(port, mask, value); }
int z_impl_gpio_port_set_masked_raw__extern(const struct device *port, gpio_port_pins_t mask, gpio_port_value_t value) { return z_impl_gpio_port_set_masked_raw(port, mask, value); }
int gpio_port_set_masked__extern(const struct device *port, gpio_port_pins_t mask, gpio_port_value_t value) { return gpio_port_set_masked(port, mask, value); }
int gpio_port_set_bits_raw__extern(const struct device *port, gpio_port_pins_t pins) { return gpio_port_set_bits_raw(port, pins); }
int z_impl_gpio_port_set_bits_raw__extern(const struct device *port, gpio_port_pins_t pins) { return z_impl_gpio_port_set_bits_raw(port, pins); }
int gpio_port_set_bits__extern(const struct device *port, gpio_port_pins_t pins) { return gpio_port_set_bits(port, pins); }
int gpio_port_clear_bits_raw__extern(const struct device *port, gpio_port_pins_t pins) { return gpio_port_clear_bits_raw(port, pins); }
int z_impl_gpio_port_clear_bits_raw__extern(const struct device *port, gpio_port_pins_t pins) { return z_impl_gpio_port_clear_bits_raw(port, pins); }
int gpio_port_clear_bits__extern(const struct device *port, gpio_port_pins_t pins) { return gpio_port_clear_bits(port, pins); }
int gpio_port_toggle_bits__extern(const struct device *port, gpio_port_pins_t pins) { return gpio_port_toggle_bits(port, pins); }
int z_impl_gpio_port_toggle_bits__extern(const struct device *port, gpio_port_pins_t pins) { return z_impl_gpio_port_toggle_bits(port, pins); }
int gpio_port_set_clr_bits_raw__extern(const struct device *port, gpio_port_pins_t set_pins, gpio_port_pins_t clear_pins) { return gpio_port_set_clr_bits_raw(port, set_pins, clear_pins); }
int gpio_port_set_clr_bits__extern(const struct device *port, gpio_port_pins_t set_pins, gpio_port_pins_t clear_pins) { return gpio_port_set_clr_bits(port, set_pins, clear_pins); }
int gpio_pin_get_raw__extern(const struct device *port, gpio_pin_t pin) { return gpio_pin_get_raw(port, pin); }
int gpio_pin_get__extern(const struct device *port, gpio_pin_t pin) { return gpio_pin_get(port, pin); }
int gpio_pin_get_dt__extern(const struct gpio_dt_spec *spec) { return gpio_pin_get_dt(spec); }
int gpio_pin_set_raw__extern(const struct device *port, gpio_pin_t pin, int value) { return gpio_pin_set_raw(port, pin, value); }
int gpio_pin_set__extern(const struct device *port, gpio_pin_t pin, int value) { return gpio_pin_set(port, pin, value); }
int gpio_pin_set_dt__extern(const struct gpio_dt_spec *spec, int value) { return gpio_pin_set_dt(spec, value); }
int gpio_pin_toggle__extern(const struct device *port, gpio_pin_t pin) { return gpio_pin_toggle(port, pin); }
int gpio_pin_toggle_dt__extern(const struct gpio_dt_spec *spec) { return gpio_pin_toggle_dt(spec); }
void gpio_init_callback__extern(struct gpio_callback *callback, gpio_callback_handler_t handler, gpio_port_pins_t pin_mask) { gpio_init_callback(callback, handler, pin_mask); }
int gpio_add_callback__extern(const struct device *port, struct gpio_callback *callback) { return gpio_add_callback(port, callback); }
int gpio_add_callback_dt__extern(const struct gpio_dt_spec *spec, struct gpio_callback *callback) { return gpio_add_callback_dt(spec, callback); }
int gpio_remove_callback__extern(const struct device *port, struct gpio_callback *callback) { return gpio_remove_callback(port, callback); }
int gpio_remove_callback_dt__extern(const struct gpio_dt_spec *spec, struct gpio_callback *callback) { return gpio_remove_callback_dt(spec, callback); }
int gpio_get_pending_int__extern(const struct device *dev) { return gpio_get_pending_int(dev); }
int z_impl_gpio_get_pending_int__extern(const struct device *dev) { return z_impl_gpio_get_pending_int(dev); }
